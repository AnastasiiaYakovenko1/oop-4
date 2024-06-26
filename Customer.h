#include <iostream>
#include "Person.h"
using namespace std;

class Customer : Person
{
private:
    int orderCount;

    static int customers; //Статична змінна, створюється перед створенням об'єктів
public:
    Customer();
    Customer(string name, string surname, int orderCount); //Конструктор, з його допомогою ми передаємо значення об'єктам
    Customer(const Customer &other); //Deep copy конструктор, з його допомогою ми копіюємо значення одного об'єкта в інший
        /*
            * Різниця між Deep та Shalow Copy у тому що:
            *
            * Shalow просто копіює і якщо ми процюємо з динамічною пам'ятю то скопійований об'єкт ссилатиметься на туж область
            * пам'яті, при очищені ми матимемо помилку тому що основний об'єкт вже почистив її, і туда ж знову хоче її почистити
            * скопійований, але та область вже нам не належить і прога падає. А ще Shalow це по суті той конструктор копіювання що
            * створюється компілятором самостійно без прописання власноруч.
            *
            * Deep у свій час, це той що ми прописуємо власноруч, і він при копіюванні об'єкта з динамічною пам'ятю виділяє зовсім
            * іншу область, і тому у основного свій адрес пам'яті а у скопійованного свій.
        */

    Customer(Customer &&other);
        /*
            * Move конструктор.
            * З назви можна зрозуміти що це конструктор переміщення, і що він переносить значення з одного об'єкта у інший.
            * Саме тому створюючи конструктор ми спочатку копіюємо значення з одного об'єкта у інший, і потім зануляєм перший.
        */

    ~Customer(); //Деструктор, руйнує(видаляє) об'єкт

    static void customersFoo(); //Статична функція, вона показує кількість кастомерів за допомогою конструкторів(в конструкторах прописано що коли об'єкт приймає значення, до стітичної змінної додається одиниця(це додано до кожного конструктора в апріорі, в деструкторі ви віднімаємо одиницю))
    friend ostream &operator << (ostream &os, Customer &obj); //Перевантажений дружній оператор виводу
    friend istream &operator >> (istream &is, Customer &obj); //Перевантажений дружній оператор вводу
};