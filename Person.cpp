#include "Person.h"
#include <string>
#include <iostream>
Person::Person()
{
    name = "Person";
    surname = "Personenko";
}
Person::Person(string name, string surname) //Внутрянка конструктора
{
    this->name = name;
    this->surname = surname;
}

Person::Person(const Person& other) //Внутрянка конструктора копіювання
{
    this->name = other.name;
    this->surname = other.surname;
}

Person::Person(Person&& other) //Внутрянка конструктора переносу
    : name(other.name), surname(other.surname)
{
    other.name = "";
    other.surname = "";
}

ostream& operator << (ostream& os, Person& obj) //Внутрянка дружнього перевантаженого оператора виводу
{
    return os << "Name: " << obj.name << " " << obj.surname << "\n";
};

istream& operator >> (istream& is, Person& obj) //Внутрянка дружнього перевантаженого оператора вводу
{
    cout << "Name:";
    is >> obj.name;

    cout << "Surname:";
    is >> obj.surname;

    return is;
};

