#include <string>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "Display.h"

class MockDisplay : public IDisplay
{
public:
    MOCK_METHOD1(displayPrice,void(Price*));
    MOCK_METHOD1(displayProductNotFoundMessage,void(std::string));
    MOCK_METHOD0(displayScannedEmptyBarcodeMessage,void());
};
