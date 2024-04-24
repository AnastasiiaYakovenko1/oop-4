cmake_minimum_required(VERSION 3.26)
project(oop_4)

set(CMAKE_CXX_STANDARD 17)

add_executable(oop_4 main.cpp
        Person.h
        Person.cpp
        Customer.h
        Customer.cpp
        Product.h
        Product.cpp
        ProductShop.h
        ProductShop.cpp
        Shop.h
        Shop.cpp
        operator.cpp
        operator.h
        Goods.h
        Goods.cpp
        )
