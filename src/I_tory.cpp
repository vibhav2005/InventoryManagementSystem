#include "I_tory.h"
#include <iostream>

void Inventory::AddProduct(const Product& product){
    products.push_back(product);
    std::cout<<" product added successfully";

}

void Inventory::DisplayProducts() const
{
    if (products.empty())
    {
        std::cout << "Inventory is empty.\n";
        return;
    }

    for (const auto& product : products)
    {
        product.display();
        std::cout << "------------------------\n";
    }
}

Product* Inventory::SearchProduct(int id)
{
    for (auto& product : products)
    {
        if (product.getId() == id)
        {
            return &product;
        }
    }

    return nullptr;
}

bool Inventory::DleteProduct(int id)
{
    for(auto it = products.begin(); it != products.end(); ++it)
    {
        if(it->getId() == id)
        {
            products.erase(it);

            return true;
        }
    }

    return false;
}