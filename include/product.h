#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>


class Product
{
private:
    /* data */
    int id;
    std::string name;
    std::string category;
    double price;
    int quantity;
    std::string supplier;

public:
   /*args*/
   //default constructor 
   Product();

   //paremeterised constructor

   Product(int id,
            const std::string& name,
            const std::string& category,
            double price,
            int quantity,
            const std::string& supplier);


    void display() const;
    int getId() const;


};

#endif
