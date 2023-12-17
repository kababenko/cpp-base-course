#include <iostream>

class Median {
public:
    int numbers[100]{};
    int n = 0;
    Median() {};
    void addNum(int q) {
        numbers[n] = q;
        n++;
    }
    void findMedian() {
        if (n % 2 == 1) {
            std::cout << numbers[n / 2 + 1] <<"\n";
        }
        else {
            std::cout << float(numbers[n / 2]+numbers[n / 2-1])/2 << "\n";
        }
    }
};

int main()
{
    Median m;
    bool flag = true;
    int x;
    int y;
    std::cout << "commands:" << "\n";
    std::cout << "1 - MedianFinder" << "\n";
    std::cout << "2 - addNum" << "\n";
    std::cout << "3 - findMedian" << "\n";
    std::cout << "0 - turn off" << "\n";
    while (flag) {
        std::cin >> x;
        if (x == 0) {
            flag = 0;
        }
        if (x == 1) {
            Median m;
        }
        if (x == 2) {
            std::cout << "Number:" << "\n";
            std::cin >> y;
            m.addNum(y);
        }
        if (x == 3) {
            std::cout << "Median:" << "\n";
            m.findMedian();
        }
    }
}
