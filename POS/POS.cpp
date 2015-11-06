// POS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string>
#include <map>
#include <iostream>

#include "Price.h"
#include "SellOneItemController.h"
#include "InMemoryCatalog.h"
#include "ConsoleDisplay.h"

std::map<std::string, Price> exMap;

int _tmain(int argc, _TCHAR* argv[])
{
    exMap.insert(std::map<std::string, Price>::value_type("12345", Price(1295)));

    SellOneItemController* controller = new SellOneItemController
        (
        new InMemoryCatalog(exMap),
        new ConsoleDisplay
        );

    controller->onBarcode("12345");
    controller->onBarcode("12343");
    controller->onBarcode("");

    return 0;
}

