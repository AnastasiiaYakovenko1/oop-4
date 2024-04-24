#pragma once
#include <iostream>
using namespace std;

class Goods {
protected:
    std::string name;
    double price;

    Goods(); //Конструктор за замовчуванням, працює для виводу магазину та номера замовлення
    Goods(string name, double price); //Конструктор
    ~Goods() {}; //Деструктор

    void setName(string newName); //Сеттер імені товару

    void printName(); //Метод виводу імені товару

    double getPrice(); //Геттер ціни
    Goods& operator=(const Goods& g);
};