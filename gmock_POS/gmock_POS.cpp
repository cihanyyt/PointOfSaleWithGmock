// gmock_POS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gmock/gmock.h"

int _tmain(int argc, _TCHAR* argv[])
{
    // The following line must be executed to initialize Google Mock
    // (and Google Test) before running the tests.
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();

	return 0;
}

