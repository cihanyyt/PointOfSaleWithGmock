#ifndef CONSOLEDISPLAY_H
#define CONSOLEDISPLAY_H

#include <string>

#include "Display.h"

class ConsoleDisplay : public IDisplay
{
    void displayPrice(Price* price)
    {
        std::cout << "RON " << price->inLei()  << std::endl;
    }

    void displayProductNotFoundMessage(std::string barcode)
    {
        std::cout << "Product not found for barcode: " << barcode << std::endl;
    }

    void displayScannedEmptyBarcodeMessage()
    {
        std::cout << "empty barcode" << std::endl;
    }
};

#endif