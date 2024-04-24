#include "Goods.h"

void Goods::printName() //Внутрянка метода виводу посилання
{
	std::cout << name;
}

double Goods::getPrice() //Внутрянка геттера ціни
{
	return price;
}

Goods::Goods() //Прописуємо внутрянку конструктора за замовченням
{
	name = "new Goods";
	price = 5;
}

Goods::Goods(string name, double price) //Внутрянка конструктора
{
	this->name = name;
	this->price = price;
}

void Goods::setName(string newName) //Внутрянка сеттера імені товару
{
	name = newName;
}
Goods& Goods::operator=(const Goods& g)
{
	this->name = g.name;
	this->price = g.price;
	return *this;
}
