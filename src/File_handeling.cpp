#include "File_handeling.h"

void FileHandeling::LoadItory(Inventory& inventory){
    std::ifstream file("E://CPP_Projects//Inventory_Management_System//docs//product.csv");

    if(!file.is_open()){
        std::cout <<"file not found!";
        return;
    }

    std::string line = "";

    while(std:: getline(file,line)){

        std::stringstream ss(line);

        std::string id;
        std::string name;
        std::string category;
        std::string price;
        std::string quantity;
        std::string supplier;

        std::getline(ss,id,',');
        std::getline(ss,name,',');
        std::getline(ss,category,',');
        std::getline(ss,price,',');
        std::getline(ss,quantity,',');
        std::getline(ss,supplier ,',');

          Product product(
            std::stoi(id),        // string -> int
            name,
            category,
            std::stod(price),     // string -> double
            std::stoi(quantity),  // string -> int
            supplier
        );

        inventory.AddProduct(product);


     }
     file.close();
     std::cout <<"Inventory loaded succesfully";
}

void FileHandeling:: SaveItory(const Inventory& inventory){

    std::ofstream file("E://CPP_Projects//Inventory_Management_System//docs//product.csv");

    if(!file.is_open()){
        std::cout<<"file not opened!";
        return;
    }

        const std::vector<Product>& products = inventory.GetProducts();

    // Write each product as one CSV row
    for (const auto& product : products)
    {
        file << product.getId() << ","
             << product.getName() << ","
             << product.getCategory() << ","
             << product.getPrice() << ","
             << product.getQuantity() << ","
             << product.getSupplier() << "\n";
    }

    // Close the file
    file.close();

    std::cout << "Inventory saved successfully.\n";


}