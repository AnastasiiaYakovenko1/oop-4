#pragma once
#include "ProductShop.h"
#include "Product.h"
#include <string>
#include <iostream>
void ProductShop::ShowProducts()
{
	for (int i = 0; i < this->n; i++)
	{
		cout << this->products[i] << endl;
	}
}
void ProductShop::AddProduct(Product p)
{
	if (n < 100)
	{
		products[n++] = p;
	}
}
ProductShop::ProductShop() //Прописуємо внутрянку конструктора за замовченням
{
	url = "www.productShopExample" + to_string(orderCount) + ".com";
}

ProductShop::ProductShop(string _url) //Прописуємо внутрянку коннструктора
{
	url = _url;
}

ProductShop::ProductShop(string _url, Product* _products, int _n)
{
	url = _url;
	for (int i = 0; i < n; i++)
	{
		products[i] = _products[i];
	}
	n = _n;
}
ProductShop::~ProductShop() //Внутрянка деструктора
{
	cout << "\nDestructor for ProductShop";
}

