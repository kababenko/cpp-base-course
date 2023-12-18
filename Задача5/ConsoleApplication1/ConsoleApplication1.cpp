#include <vector>
#include <stack>
#include <iostream>
using namespace std;
class Solution {
public:
    int getAns(vector <int> a) {
        stack <int> st;
        int i = 0;
        int ans = 0;
        while (i < a.size()) {
            if (st.empty() || a[i] >= a[st.top()]) {
                st.push(i);
                i++;
            }
            else {
                int height = a[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                int area = height * width;
                ans = max(ans, area);
            }
        }
        while (!st.empty()) {
            int height = a[st.top()];
            st.pop();
            int width = st.empty() ? a.size() : a.size() - st.top() - 1;
            int area = height * width;
            ans = max(ans, area);
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& x) {
        int ans = 0;
        int n = x.size();
        if (!n)return 0;
        int m = x[0].size();
        vector <int> height(m);;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (x[i][j] == '1')height[j]++;
                else height[j] = 0;
            }
            ans = max(ans, getAns(height));
        }
        return ans;
    }
};
int main() {
    vector<vector<char>> v = {
       {'1','0','1','0','0'},
       {'1','0','1','1','1'},
       {'1','1','1','1','1'},
       {'1','0','0','1','0'}
    };
    Solution ob;
    cout << (ob.maximalRectangle(v));
}
