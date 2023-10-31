#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.3/PR5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(HFunctionTests)
{
public:
    TEST_METHOD(TestMethod1)
    {
        // Test a specific case
        double result = h(2.0); // Replace with your test case
        Assert::AreEqual(0.892917, result, 0.000001); // Adjust the expected value and tolerance
    }

    TEST_METHOD(TestMethod2)
    {
        double result = h(0.5); 
        Assert::AreEqual(0.561214, result, 0.000001); 
    }

};
