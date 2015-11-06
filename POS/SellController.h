class SellController
{
public:
    virtual ~SellController() {}
    //virtual double GetSalary() const = 0;

    virtual void onBarcode(std::string barcode) = 0;
//protected:
//    SellController() {}
};


