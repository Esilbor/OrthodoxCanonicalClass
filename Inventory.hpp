#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include <iostream>

class Inventory 
{
public:
    Inventory();
    ~Inventory();
    Inventory(const Inventory& inventoryCopy);
    Inventory& operator=(const Inventory& inventoryB);

private:
    // Add your attributes here
};

#endif