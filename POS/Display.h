#ifndef DISPLAY_H
#define DISPLAY_H

#include<string>

#include "Price.h"

class IDisplay
{
public:
    virtual void displayPrice(Price *price) = 0;

    virtual void displayProductNotFoundMessage(std::string barcode) = 0;

    virtual void displayScannedEmptyBarcodeMessage() = 0;

};
#endif
