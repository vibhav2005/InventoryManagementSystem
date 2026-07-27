#include <iostream>
#include "product.h"
#include "I_tory.h"

int main()
{
    std::cout << "=====================================\n";
    std::cout << " Inventory Management System\n";
    std::cout << "=====================================\n";

    Inventory inventory;

    Product p;
    Product p1(
        101,
        "esp32",
        "deelopement board",
        456.68,
        10,
        "espressif systems"
    );
 
    Product p2(
        102,
        "arduino",
        "deelopement board",
        300.5,
        12,
        "Uno Minda tech"
    );

    p.display();
    std::cout<<"\n";
    p1.display();
    std::cout<<"\n";
    p2.display();
    std::cout<<"\n";

    inventory.AddProduct(p1);
    inventory.AddProduct(p2);

    inventory.DisplayProducts();

    return 0;
}
