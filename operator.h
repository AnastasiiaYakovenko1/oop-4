#ifndef OOP_2_OPERATOR_H
#define OOP_2_OPERATOR_H
#include <iostream>
using namespace std;


class Operator {
    int x, y;
public:
    Operator(int x, int y); //Конструктор

    // Перевантаження унарного оператора
    Operator operator+() const
    {
        return Operator{x, y};
    };


    // Перевантаження бінарного оператора
    Operator operator+(const Operator& other) const
    {
        return Operator{x + other.x, y + other.y};
    };

    string showUnary() const; //Метод для виводу результату обчислення з перезавантаженим унарним оператором
    string showBinary() const; //Метод для виводу результату обчислення з перезавантаженим бінарним оператором
};


#endif
