#include <iostream>
#include "ProductShop.h"
#include "Product.h"
#include "Customer.h"
#include "operator.h"
using namespace std;

int main() {
	Product Product1 = Product();
	ProductShop Shop1 = ProductShop(); //Константний об'єкт, (значення не можна змінити)


	//Customer::customersFoo(); //Визов функції яка показує кількість Кастомерів(вона визивається за допомогою всього класу, а не через об'єкт як звичайні методи)
	//cout << "\n\n";
	//Customer Customer1; //Створення об'єкта
	//cin >> Customer1; //Передача йому значень за допомогою дружнього оператора
	//cout << "\n-----------------------------------\n";
	//cout << Customer1; //Вивод значень за допомогою дружнього оператора
	//cout<<" bought ";
	//Product1.printName();
	//cout<<" at ";
	//Shop1.printUrl();
	//cout<<endl;
	//cout << "-----------------------------------\n\n";

	//Customer::customersFoo();

	//Customer Customer2{Customer1}; //Визов Копі конструктора(копіює значення об'єкта Customer1 у поля об'єкта Customer2)
	//cout << "\n-----------------------------------\n";
	//cout << Customer2; //Вивод значень за допомогою дружноього оператора
	//cout<<" bought ";
	//Product1.printName();
	//cout<<" at ";
	//Shop1.printUrl();
	//cout<<endl;
	//cout << "-----------------------------------\n\n";

	//Customer::customersFoo();


	//Customer Customer3; //Визов Копі конструктора(копіює значення об'єкта Customer1 у поля об'єкта Customer2)
	//cout << "\n\n";
	//cin >> Customer3; //Передача йому значень за допомогою дружнього оператора
	//cout << "\n-----------------------------------\n";
	//cout << Customer3; //Вивод значень за допомогою дружноього оператора
	//cout<<" bought ";
	//Product1.printName();
	//cout<<" at ";
	//Shop1.printUrl();
	//cout<<endl;
	//cout << "-----------------------------------\n\n";

	//Customer::customersFoo();

	//Customer Customer4 = move(Customer3); //Визов Копі конструктора(копіює значення об'єкта Customer1 у поля об'єкта Customer2)
	//                                      // Він не працює через те що використовуються звичайні об'єкти а не динамічні

	//cout << "\n-----------------------------------\n";
	//cout << Customer4; //Вивод значень за допомогою дружноього оператора
	//cout<<" bought ";
	//Product1.printName();
	//cout<<" at ";
	//Shop1.printUrl();
	//cout<<endl;
	//cout << "-----------------------------------\n\n";

	//Customer::customersFoo();

	//cout << "\n\n\n";

	//const Operator p1{1, 2};
	//Operator p2 = +p1; // Виклик перевантаженого унарного оператора `+`

	//    /*
	//        * Унарний оператор на то й унарний що процює з одним об'єктом, в данному прикладі ви маємо з поля х та у, і наш оператор передає ці значення в інший об'єкт
	//     */

	//cout << p2.showUnary() << endl;

	//const Operator v1{1, 2}, v2{3, 4};
	//Operator v3 = v1 + v2; // Виклик перевантаженого бінарного оператора `+`

	//    /*
	//        * Бінарний, працює з двома об'єктами, і нашому випадку він бере х з v1 та х з v2 і їх сумує, результат передає в v3, з у аналогічно.
	//     */

	//cout << v3.showBinary() << endl;

	Shop1.AddProduct(Product1);
	Shop1.ShowProducts();
	Product p2 = Product(Product1);//Copy ctor
	p2.printName();
	ProductShop ps2 = ProductShop(Shop1);//Copy ctor
	Customer cus1 = Customer("John", "Marley", 0);
	cout << endl << cus1 << endl;
	Customer cus2 = Customer(move(cus1));//Move ctor
	cout << cus2 << endl;
	Product p3 = Product();
	cout << p3 << endl;
	p3 = p2;//робота оператора =
	cout << p3 << endl;
	return 0;
}