#ifndef CATALOG_H
#define CATALOG_H

#include "Price.h"

#include <string>

class ICatalog
{
public:
    virtual Price* findPrice(std::string) = 0;
};

#endif