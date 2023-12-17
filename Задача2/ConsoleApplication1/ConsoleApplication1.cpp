// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

int main()
{
    int n;
    int x;
    int indexDiff;
    int valueDiff;
    std::cout << "enter the length of the array\n";
    std::cin >> n;
    std::cout << "enter the indexDiff\n";
    std::cin >> indexDiff;
    std::cout << "enter the valueDiff\n";
    std::cin >> valueDiff;
    int nums[100]{};
    std::cout << "enter the array\n";
    for (int i=0; i < n; i++)
    {
        std::cin >> nums[i];
    }
    int i = 0;
    int t = 0;
    while ((i < n) and ( t == 0)) {
        for (int j = 0; j < n; j++) {
            if ((abs(i - j) <= indexDiff) and ( abs(nums[i] - nums[j]) <= valueDiff)) {
                t = 1;
            }
        }
        i++;
    }
    if (t == 0) {
        std::cout << "false";
    }
    else {
        std::cout << "true";
    }
}
