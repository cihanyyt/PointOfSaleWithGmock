#ifndef SELLCONTROLLER_H
#define SELLCONTROLLER_H

class SellController
{
public:
    virtual ~SellController() {}

    virtual void onBarcode(std::string barcode) = 0;
};

#endif
