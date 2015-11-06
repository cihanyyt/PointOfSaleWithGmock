#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "MockCatalog.h"
#include "MockDisplay.h"

#include "SellOneItemController.h"
#include "Price.h"

using ::testing::Return;
using testing::AtLeast;
using testing::Sequence;
using testing::InSequence;

TEST(HelloTest, productFound)
{
    MockCatalog catalog;
    MockDisplay display;
    Price* price = new Price(1295);

    ON_CALL(catalog, findPrice("12345"))
        .WillByDefault(Return(price));


    EXPECT_CALL(display,displayPrice(price))
        .Times(AtLeast(1));

    SellOneItemController sellOneItemController(&catalog, &display);
    sellOneItemController.onBarcode("12345");
}

TEST(HelloTest, productNotFound)
{
    MockCatalog catalog;
    MockDisplay display;
    

    ON_CALL(catalog, findPrice("12345"))
        .WillByDefault(Return(nullptr));

    EXPECT_CALL(display,displayProductNotFoundMessage("12345"))
        .Times(AtLeast(1));

    SellOneItemController sellOneItemController(&catalog, &display);
    sellOneItemController.onBarcode("12345");

}

TEST(HelloTest, end)
{

    EXPECT_EQ(4,4);
}