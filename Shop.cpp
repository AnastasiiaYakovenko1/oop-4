#include "Shop.h"
#include <string>
int Shop::orderCount = 0; //Занулюємо, щоб не було сміття в змінній

Shop::Shop() //Прописуємо внутрянку конструктора за замовченням
{
	url = "www.shopExample" + to_string(orderCount) + ".com";
}

Shop::Shop(string url) //Прописуємо внутрянку коннструктора
	: url(url) {}

Shop::~Shop() //Внутрянка деструктора
{
	cout << "\nDestructor for shop";
}

void Shop::setUrl(string url) //Внутрянка сеттера посилання
{
	this->url = url;
}

void Shop::printUrl() const //Внутрянка метода виводу посилання
{
	cout << url;
}

void Shop::addOrderCount() //Внутрянка методу який додає номер до замовлення
{
	orderCount++;
}