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
        bool DleteProduct(int id);

};

#endif 

