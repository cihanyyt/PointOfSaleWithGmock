#include <string>
#include "Catalog.h"
#include "Display.h"
#include "SellController.h"

class SellOneItemController : public SellController
{
public:

    SellOneItemController(IntfCatalog* catalog, IDisplay* display)
    {
        this->catalog = catalog;
        this->display = display;
    }

    void onBarcode(std::string barcode)
    {
        if (barcode.empty())
        {
            display->displayScannedEmptyBarcodeMessage();
            return;
        } 

        Price *price = catalog->findPrice(barcode);
        if (NULL == price)
        {
            display->displayProductNotFoundMessage(barcode);
        } 
        else
        {
            display->displayPrice(price);
        }
    }
private:
    int m_val;

    IntfCatalog *catalog;
    IDisplay *display;
};
