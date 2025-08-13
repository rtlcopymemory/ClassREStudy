#pragma once
#include "VirtualBase.h"

class TestClass : VirtualBase
{
public:
    __declspec(noinline) TestClass();
    __declspec(noinline) ~TestClass();

    __declspec(noinline) int getTestValue() const;
    __declspec(noinline) void setTestValue(int value);

    __declspec(noinline) void virtualFunction();
    __declspec(noinline) void pureVirtualFunction();

    __declspec(noinline) static void staticFunction();
    __declspec(noinline) static int getStaticValue();
    __declspec(noinline) static void setStaticValue(int value);

    __declspec(noinline) int handleNumber(int number);
    __declspec(noinline) float handleNumber(float number);
    __declspec(noinline) double handleNumber(double number);
    __declspec(noinline) short handleNumber(short number);

    template<typename T>
    __declspec(noinline) T handleNumberTemplate(T number) {
        volatile unsigned char marker[] = { 0xA7, 0xB8, 0xC9, 0xDA, 0xEB, 0xFC };
        (void)marker;
        return number;
    }

private:
    int testValue;
    static int staticValue;
};

