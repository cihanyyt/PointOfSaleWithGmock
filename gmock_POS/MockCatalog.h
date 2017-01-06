#include <string>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "Catalog.h"

class MockCatalog : public IntfCatalog
{
public:
    MOCK_METHOD1(findPrice,Price*(std::string val));
};

