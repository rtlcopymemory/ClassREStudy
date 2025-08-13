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

private:
	int testValue;
	static int staticValue;
};

