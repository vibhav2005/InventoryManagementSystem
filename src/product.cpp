#include "product.h"
#include <iostream>

Product::Product():
    id(0),
    name(""),
    category(""),
    price(0.0),
    quantity(0),
    supplier("")
    {

    }
Product::Product(
    int id,
    const std::string& name,
    const std::string& category,
    double price,
    int quantity,
    const std::string& supplier):
    id(id),
    name(name),
    category(category),
    price(price),
    quantity(quantity),
    supplier(supplier)
    {

    }

void Product::display() const{

    std::cout << "ID: " << id << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Category: " << category << '\n';
    std::cout << "Price: " << price << '\n';
    std::cout << "Quantity: " << quantity << '\n';
    std::cout << "Supplier: " << supplier << '\n';
}

int Product::getId() const{
    return id;
}

