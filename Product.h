#pragma once
#include <iostream>
#include "Goods.h"
using namespace std;

class Product : public Goods{
private:
	string expiration_date;//строк придатності
public:
	void setExpirationDate(string neweExpirationDate); //Сеттер cтроку придатності
    Product(); //Конструктор за замовчуванням, працює для виводу магазину та номера замовлення
    Product(string name, double price); //Конструктор
    Product(string name, double price, string ed); //Конструктор з 3 параметрами
    ~Product() {}; //Деструктор
    string getName();
    void setName(string newName); //Сеттер імені товару

    void printName(); //Метод виводу імені товару

    double getPrice(); //Геттер ціни
     Product& operator=(const Product& p);
     friend ostream& operator<<(ostream& os, Product p);
};