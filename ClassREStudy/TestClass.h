#pragma once

#include "VirtualBase.h"

class TestClass: VirtualBase
{
public:
	TestClass();
	~TestClass();

	int getTestValue() const;
	void setTestValue(int value);

	static void staticFunction();
	static int getStaticValue();
	static void setStaticValue(int value);

	virtual void virtualFunction(); // virtual function
	void pureVirtualFunction();

	int handleNumber(int number);
	float handleNumber(float number);
	double handleNumber(double number);
	short handleNumber(short number);

	template<typename T>
	T handleNumberTemplate(T number) {
	    volatile unsigned char marker[] = { 0xA7, 0xB8, 0xC9, 0xDA, 0xEB, 0xFC };
	    (void)marker;
	    return number;
	}

private:
	int testValue;
	static int staticValue;
};

