#ifndef MENU_H
#define MENU_H

#include "I_tory.h"
#include <iostream>
#include <string>
#include "File_handeling.h"

class Menu
{
private:
    Inventory inventory;
    FileHandeling file;

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