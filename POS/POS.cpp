// POS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string>
#include <map>
#include <iostream>

#include "Price.h"
#include "SellOneItemController.h"
#include "InMemoryCatalog.h"
#include "Display.h"



class Display : public IDisplay
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

int _tmain(int argc, _TCHAR* argv[])
{
    std::map<std::string, Price> exMap;
    exMap.insert(     std::map<std::string, Price>::value_type("12345", Price(1295))         );

    SellOneItemController* controller = new SellOneItemController
        (
        new InMemoryCatalog(exMap),
        new Display
        );

    controller->onBarcode("12345");
    controller->onBarcode("12343");
    controller->onBarcode("");

    return 0;
}

