#ifndef PRICE_H
#define PRICE_H

#include <string>

class Price
{
public:
    Price()
    {

    }

    Price(int baniValue)
    {
        this->baniValue = baniValue;
    }
    
    static Price* bani(int baniValue)
    {
        return new Price(baniValue);
    }

    std::string toString()
    {
        return "a Price";
    }

    double inLei()
    {
        return baniValue / 100.0;
    }

private:
    int baniValue;

};
#endif
