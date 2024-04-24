#include "Product.h"
#pragma once
void Product::printName() //Внутрянка метода виводу посилання
{
Goods::printName();
}
string Product::getName() //Внутрянка метода виводу посилання
{
	return name;
}
double Product::getPrice() //Внутрянка геттера ціни
{
	return price;
}

void Product::setExpirationDate(string neweExpirationDate)
{
	expiration_date = neweExpirationDate;
}

Product::Product() : Goods("new Product", 5) //Прописуємо внутрянку конструктора за замовченням
{
	this->expiration_date = "11.04.2024";
}

Product::Product(string name, double price) : Goods(name, price) //Внутрянка конструктора
{
	this->expiration_date = "11.04.2024";
}
Product::Product(string name, double price, string ed) : Goods(name, price) //Внутрянка конструктора
{
	expiration_date = ed;
}

void Product::setName(string newName) //Внутрянка сеттера імені продукту
{
Goods:setName(newName);
}

Product& Product::operator=(const Product& p)//Імплементація оператора =
{
	this->name = p.name;
	this->expiration_date = p.expiration_date;
	this->price = p.price;
	return *this;
}

ostream& operator<<(ostream& os, Product p)
{
	os << p.getName() << " " << p.getPrice() << " " << p.expiration_date;
	return os;
}
