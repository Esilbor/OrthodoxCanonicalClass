#include "./Inventory.hpp"

Inventory::Inventory()
/*:define attributes(value)*/
{
    std::cout << "Inventory " << "has been constructed" << std::endl;
}

Inventory::~Inventory()
{
    std::cout << "Inventory " << "has been destructed" << std::endl;
}

Inventory::Inventory(const Inventory& inventoryCopy)
/*:define attributes(value)*/
{
    std::cout << "Inventory " << "has been copied" << std::endl;
}

Inventory& Inventory::operator=(const Inventory& inventoryB)
{
    if (this != &inventoryB)
    {
        /*define copied attributes here*/
    }
}
