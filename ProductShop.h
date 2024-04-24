#pragma once
#include "Shop.h"
#include "Goods.h"
#include "Product.h"
#include <string>
class ProductShop : public Shop//Is_A
{
	Product products[100];//Has_A
	int n = 0;
public:
	void ShowProducts();
	void AddProduct(Product p);
	ProductShop(); //Конструктор за замовчуванням, працює для виводу магазину та номера замовлення
	ProductShop(string url); //Конструктор
	ProductShop(string _url, Product* _products, int _n); //Конструктор
	~ProductShop(); //Деструктор

};

