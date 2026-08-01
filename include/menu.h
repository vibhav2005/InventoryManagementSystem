#ifndef MENU_H
#define MENU_H

#include "I_tory.h"

class Menu
{
private:
    Inventory inventory;

public:
    void run();

private:
    void displayMenu();

    void addProduct();

    void searchProduct();

    void deleteProduct();

    void displayProducts();
};

#endif