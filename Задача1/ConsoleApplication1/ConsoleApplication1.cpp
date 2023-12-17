#include <iostream>
#include <limits>
using namespace std;
struct Node
{
    int data;
    Node* left, * right;

    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

int findMaxPathSum(Node* node, int& result)
{
    if (node == nullptr) {
        return 0;
    }
    int left = findMaxPathSum(node->left, result);
    int right = findMaxPathSum(node->right, result);
    result = max(result, node->data);
    result = max(result, node->data + left);
    result = max(result, node->data + right);
    result = max(result, node->data + left + right);
    return max(node->data, node->data + max(left, right));
}

int main()
{
    Node* root = new Node(-10);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    int result = numeric_limits<int>::min();
    findMaxPathSum(root, result);
    cout << "The maximum path sum is " << result << endl;
    return 0;
}
