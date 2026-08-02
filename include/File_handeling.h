#ifndef FILE_HANDELING_H
#define FILE_HANDELING_H
#include "I_tory.h"
#include <fstream>
#include <sstream>
#include <iostream>

class FileHandeling
{
public:
    void SaveItory(const Inventory& inventory);
    void LoadItory(Inventory& inventory);
};

#endif
