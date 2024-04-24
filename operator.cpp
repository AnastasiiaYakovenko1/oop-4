#include "operator.h"

#include <string>
Operator::Operator(int x, int y) //Прописуємо значення конструктора
{
    this->x = x;
    this->y = y;
};

string Operator::showUnary() const //Прописуємо що має виводити метод
{
    return "\n\nX: " + to_string(x) + "\n" + "Y: " + to_string(y) + "\n";
};

// to_string(), встроєний метод який змінює тип данних, в нашому випадку з int в string

string Operator::showBinary() const //Прописуємо що має виводити метод
{
    return "\n\nA: " + to_string(x) + "\n" + "B: " + to_string(y) + "\n";
};
