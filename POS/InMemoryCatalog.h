#include <string>
#include <map>

#include "Catalog.h"
#include "Price.h"

class InMemoryCatalog : public IntfCatalog
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
            
        //return &priceByBarcode[barcode];
    }

private:
    std::map<std::string, Price> priceByBarcode;
};
