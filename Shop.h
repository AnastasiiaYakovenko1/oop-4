#include <iostream>
using namespace std;

class Shop {
protected:
    string url;
    static int orderCount; //Константна змінна, номера замовлення

    Shop(); //Конструктор за замовчуванням, працює для виводу магазину та номера замовлення
    Shop(string name); //Конструктор
    ~Shop(); //Деструктор
public:
    void setUrl(string url); //Сеттер посилання

    void printUrl() const; //Константний матод(потрібен щоб константний об'єкт працював(він не працює зі звичайними методами, тільки з константними))
    void addOrderCount(); //Метод який додає номер до замовлення
};