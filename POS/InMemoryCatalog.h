#ifndef INMEMORYCATALOG_H
#define INMEMORYCATALOG_H

#include <string>
#include <map>

#include "Catalog.h"
#include "Price.h"

class InMemoryCatalog : public ICatalog
{
public:
    InMemoryCatalog(std::map<std::string, Price>pricesByBarcode)
    {
        this->priceByBarcode = pricesByBarcode;
    }

    Price* findPrice(std::string barcode)
    {
        if(priceByBarcode.find(barcode) == priceByBarcode.end())
            return NULL;
        else
        return &priceByBarcode[barcode];
    }

private:
    std::map<std::string, Price> priceByBarcode;
};

#endif
