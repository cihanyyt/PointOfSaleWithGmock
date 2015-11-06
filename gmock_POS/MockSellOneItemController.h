#include <string>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "SellController.h"

class MockSellOneItemController : public SellController
{
public:
    MOCK_METHOD1(onBarcode,void(std::string val));
};

