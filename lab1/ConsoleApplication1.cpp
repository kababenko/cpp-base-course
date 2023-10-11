// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
float plus(float a, float b)
{
    return a + b;
}

float minus(float a, float b)
{
    return a - b;
}

float div(float a, float b)
{
    return a / b;
}

float umn(float a, float b)
{
    return a * b;
}

float step(float a, float b)
{
    return pow(a,b);
}

int nod(int a, int b)
{
    int t = 0;
    while ((a>0) && (b>0))
    {
        t = a % b;
        a = b;
        b = t;
    }
    if (a > b) 
    {
        return a;
    }
    else 
    {
        return b;
    }
}

int main()
{
    float x;
    int kom;
    float y;
    bool flag = true;   
    std::cout << "commands:" << "\n";
    std::cout << "0 - turn off:" << "\n";
    std::cout << "1 - plus:" << "\n";
    std::cout << "2 - minus:" << "\n";
    std::cout << "3 - multiply:" << "\n";
    std::cout << "4 - divide:" << "\n";
    std::cout << "5 - degree:" << "\n";
    std::cout << "6 - smallest common divisor:" << "\n";
    while (flag) 
    {
    std::cout << "select command" << "\n";
    std::cin >> kom;
    std::cout << "enter first number" << "\n";
    std::cin >> x;
    std::cout << "enter second number" << "\n";
    std::cin >> y;
    if (kom == 0) flag = false;
    if (kom == 1) std::cout << plus(x, y);
    if (kom == 2) std::cout << minus(x, y);
    if (kom == 3) std::cout << umn(x, y);
    if (kom == 4) std::cout << div(x, y);
    if (kom == 5) std::cout << step(x, y);
    if (kom == 6) std::cout << nod(int(x),int(y));
    std::cout << "\n";
    }
}