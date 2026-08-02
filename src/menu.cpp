#include "menu.h"

void Menu::addProduct(){
        int id;
        double price;
        int quantity;

        std::string name;
        std::string category;
        std::string supplier;

        std::cout << "Enter ID: ";
        std::cin >> id;

        std::cin.ignore();

        std::cout << "Enter Name: ";
        std::getline(std::cin, name);

        std::cout << "Enter Category: ";
        std::getline(std::cin, category);

        std::cout << "Enter Price: ";
        std::cin >> price;

        std::cout << "Enter Quantity: ";
        std::cin >> quantity;

        std::cin.ignore();

        std::cout << "Enter Supplier: ";
        std::getline(std::cin, supplier);

        Product product(
            id,
            name,
            category,
            price,
            quantity,
            supplier
        );

        inventory.AddProduct(product);
}

void Menu::displayMenu()
{
    std::cout << "\n=====================================\n";
    std::cout << " Inventory Management System\n";
    std::cout << "=====================================\n";

    std::cout << "1. Add Product\n";
    std::cout << "2. Display Products\n";
    std::cout << "3. Search Product\n";
    std::cout << "4. Delete Product\n";
    std::cout << "5. Save Inventory\n";
    std::cout << "6. Load Inventory\n";
    std::cout << "7. Exit\n";

    std::cout << "\nEnter Choice: ";
}


void Menu::searchProduct()
{
    int id;

    std::cout << "Enter Product ID : ";
    std::cin >> id;

    Product* product = inventory.SearchProduct(id);

    if(product != nullptr)
    {
        std::cout << "\nProduct Found\n\n";
        product->display();
    }
    else
    {
        std::cout << "\nProduct Not Found.\n";
    }
}

void Menu::deleteProduct()
{
    int id;

    std::cout << "Enter Product ID : ";
    std::cin >> id;

    if(inventory.DeleteProduct(id))
    {
        std::cout << "Product Deleted Successfully.\n";
    }
    else
    {
        std::cout << "Product Not Found.\n";
    }
}

void Menu::displayProducts()
{
    inventory.DisplayProducts();
}

void Menu::run()
{
    int choice;
    file.LoadItory(inventory);

    while(true)
    {
        displayMenu();
        


        std::cin >> choice;

        switch(choice)
        {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                deleteProduct();
                break;
            
            case 5:
                file.SaveItory(inventory);   // Save once before exiting
                std::cout << "Thank you for using Inventory Management System.\n";
                break;

            case 6:
                file.LoadItory(inventory);   // load once before exiting
                std::cout << "loaded last state\n";
                break;

            case 7:
                std::cout << "Thank you for using Inventory Management System.\n";
                return;

            default:
                std::cout << "Invalid Choice.\n";
        }
    }
}

