// lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include "lab2.h"
class Animals {
public:
    std::string Name;
    int weight;
    int age;
    bool isHungry = true;
    Animals() {};
    void virtual changename(std::string name) {
        Name = name;
    }
    void virtual eat() {
        weight++;
    }
    void virtual growing() {
        age++;
    }
    void virtual makeSound() {
        std::cout << 'igo';
    }
    void virtual happy() {
    }
    void virtual add() {
        weight = 0;
        age = 0;
    }
};

class Crocodile : public  Animals{
public:
    int tail;
    int densityscales;
    Crocodile():Animals(){
    }
    void bite() {
        std::cout << "Crocodile bite you" << "\n";
    }
    void eat() override {
        weight++;
        tail++;
        densityscales++;
    }
    void add() override {
        weight = 0;
        age = 0;
        tail = 0;
        densityscales = 0;
    }
private:
};

class Giraffe : public Animals {
public:
    int necklength;
    int langlength;
    Giraffe():Animals(){}
    void happy() override{
        std::cout << "Giraffe looks happy" << "\n";
    } 
    void eat() override {
        weight ++;
        necklength += 2;
        langlength += 1;
    }
    void add() override {
        weight = 0;
        age = 0;
        necklength = 0;
        langlength = 0;
    }
};

class Lion : public Animals {

public:
    int mane;
    int wool;
    Lion() : Animals() {    }
    void eat() override {
        weight += 2;
        mane += 2;
        wool += 1;
    }
    void  makeSound() override {
        std::cout << "ROAR!" << "\n";
    }
    void happy() override {
        std::cout << "Lion looks happy" << "\n";
    }
    void add() override {
        weight = 0;
        age = 0;
        mane = 0;
        wool = 0;
    }
    void bite() {
        std::cout << "Lion bite you" << "\n";
    }
};

int main()
{
    int x;
    int z;
    int y;
    std::string name;
    bool flag = true;
    Lion cell1[9] = {};
    Giraffe cell2[9] = {};
    Crocodile cell3[9] = {};
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    std::cout << "commands:" << "\n";
    std::cout << "1 - Lion" << "\n";
    std::cout << "2 - Giraffe" << "\n";
    std::cout << "3 - Crocodile" << "\n";
    std::cout << "0 - turn off" << "\n";
    std::cout << "1 - Add animal" << "\n";
    std::cout << "2 - feed" << "\n";
    std::cout << "3 - stroke" << "\n";
    std::cout << "4 - nothing" << "\n";
    std::cout << "5 - change name" << "\n";
    while (flag)
    {
        std::cout << "Choose animal:" << "\n";
        std::cin >> x;
        std::cout << "Choose number:" << "\n";
        std::cin >> y;
        std::cout << "Choose command:" << "\n";
        std::cin >> z;
        if (x == 1) {
            if (y > i1) {
                std::cout << "none animal" << "\n";
            }
            else {
                if (z == 0) {
                    flag = 0;
                }
                if (z==1,i1 < 8) {
                    cell1[i1].add();
                    i1++;
                }
                else {
                    std::cout << "none place" << "\n";
                }
                if (z == 2) {
                    cell1[y].eat();
                    cell1[y].happy();
                }
                if (z == 3) {
                    cell1[y].bite();
                }
                if (z == 4) {
                    cell1[y].makeSound();
                }
                if (z == 5) {
                    std::cout << "choose name:" << "\n";
                    std::cin >> name;
                    cell1[y].changename(name);
                }
            }
        }
        if (x == 2) {
            if (y > i2) {
                std::cout << "none animal" << "\n";
            }
            else {
                if (z == 0) {
                    flag = 0;
                }
                if (z == 1, i2 < 8) {
                    cell2[i2].add();
                    i2++;
                }
                else {
                    std::cout << "none place" << "\n";
                }
                if (z == 2) {
                    cell2[y].eat();
                    cell2[y].happy();
                }
                if (z == 3) {
                    cell2[y].makeSound();
                }
                if (z == 5) {
                    std::cout << "choose name:" << "\n";
                    std::cin >> name;
                    cell2[y].changename(name);
                }
            }
        }
        if (x == 3) {
            if (y > i2) {
                std::cout << "none animal" << "\n";
            }
            else {
                if (z == 0) {
                    flag = 0;
                }
                if (z == 1, i3 < 8) {
                    cell2[i3].add();
                    i3++;
                }
                else {
                    std::cout << "none place" << "\n";
                }
                if (z == 2) {
                    cell3[y].eat();
                }
                if (z == 3) {
                    cell3[y].bite();
                }
                if (z == 5) {
                    std::cout << "choose name:" << "\n";
                    std::cin >> name;
                    cell3[y].changename(name);
                }
            }
        }
    }
}
