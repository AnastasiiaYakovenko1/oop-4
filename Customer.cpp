#include "Customer.h"

int Customer::customers = 0; //Зануляємо щоб не було сміття

Customer::Customer() : Person()
{
	orderCount = 0;
	customers++;
}
Customer::Customer(string name, string surname, int orderCount) : Person(name, surname) //Внутрянка конструктора
{
	this->orderCount = orderCount;
	customers++;
}

Customer::Customer(const Customer& other) : Person(other)//Внутрянка конструктора копіювання
{
	this->orderCount = other.orderCount;

	customers++;
};

Customer::Customer(Customer&& other) : Person(other) //імплементація конструктора переносу
, orderCount(other.orderCount)
{
	other.orderCount = 0;

	customers++;
};


void Customer::customersFoo() //Внутрянка методу який виводить кількість кастомерів
{
	cout << "Count of customers: " << customers;
}

ostream& operator << (ostream& os, Customer& obj) //Внутрянка дружнього перевантаженого оператора виводу
{
	return os << "Name: " << obj.name << " " << obj.surname << "\n"
		<< "Order count: " << obj.orderCount << "\n";
};

istream& operator >> (istream& is, Customer& obj) //Внутрянка дружнього перевантаженого оператора вводу
{
	cout << "Name:";
	is >> obj.name;

	cout << "Surname:";
	is >> obj.surname;

	cout << "Order count:";
	is >> obj.orderCount;

	return is;
};
Customer::~Customer()
{
	customers--;
}