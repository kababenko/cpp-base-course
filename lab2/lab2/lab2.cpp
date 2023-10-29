// lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Animals {
private:
    int lion;
    int giraffe;
    int crocodale;

public:
    Animals(int l, int g, int c);
    std::string GetLion() const;
    std::string GetGiraffe() const;
    std::string GetCrocodale() const;
};
Animals::Animals(int l, int g, int c) {
    if (l > 0)
        lion = l;
    if (g > 0)
        giraffe = g;
    if (c > 0)
        crocodale = c;
}

std::string Animals::GetLion() const {
    if (lion == 1) {
        return "-hand";
    }
    if (lion == 2) {
        return "-(hand+meet)";
    }
    if (lion == 3) {
        return "-hand";
    }
}

std::string Animals::GetGiraffe() const {
    if (giraffe == 1) {
        return "nothing";
    }
    if (giraffe == 2) {
        return "eats";
    }
    if (giraffe == 3) {
        return "nothing";
    }
}

std::string Animals::GetCrocodale() const {
    if (crocodale == 1) {
        return "-hand";
    }
    if (crocodale == 2) {
        return "-(hand+meet)";
    }
    if (crocodale == 3) {
        return "-hand";
    }
}

int main()
{
    int x;
    int z;
    int y;
    bool flag = true;
    std::cout << "commands:" << "\n";
    std::cout << "0 - turn off" << "\n";
    std::cout << "1 - touch" << "\n";
    std::cout << "2 - feed" << "\n";
    std::cout << "3 - stroke" << "\n";
    while (flag)
    {
        std::cout << "with lion" << "\n";
        std::cin >> x;
        std::cout << "with giraffe" << "\n";
        std::cin >> y;
        std::cout << "with crocodale" << "\n";
        std::cin >> z;
        std::cout << "\n";
        if (x == 0 or y == 0 or z == 0) {
            flag = false;
        }
        else {
            Animals Animals(x, y, z);
            std::cout << "lion:" << "\n";
            std::cout << Animals.GetLion() << "\n";
            std::cout << "giraffe:" << "\n";
            std::cout << Animals.GetGiraffe() << "\n";
            std::cout << "crocodale:" << "\n";
            std::cout << Animals.GetCrocodale() << "\n";
        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
