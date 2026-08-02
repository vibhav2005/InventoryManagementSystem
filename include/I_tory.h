#ifndef ITORY_H
#define ITORY_H


#include "product.h"
#include <vector>

class Inventory{
    private:
        std::vector<Product> products;

    public:

        void AddProduct(const Product& product);
        void DisplayProducts() const;
        Product* SearchProduct(int id);
        bool DeleteProduct(int id);

        const std::vector<Product>& GetProducts() const;
};

#endif 

