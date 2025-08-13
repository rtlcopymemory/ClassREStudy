#include <iostream>
#include "TestClass.h"

int main()
{
	TestClass* test = new TestClass();

	// Instance methods
	test->setTestValue(123);
	int value = test->getTestValue();
	std::cout << "Test Value: " << value << std::endl;

	// Static methods
	TestClass::setStaticValue(456);
	int staticVal = TestClass::getStaticValue();
	std::cout << "Static Value: " << staticVal << std::endl;

	TestClass::staticFunction();
	std::cout << "Static Value after staticFunction: " << TestClass::getStaticValue() << std::endl;

	test->virtualFunction();
	test->pureVirtualFunction();

	test->handleNumber(42);							// Integer
	test->handleNumber(3.14f);						// Float
	test->handleNumber(2.718);						// Double
	test->handleNumber(static_cast<short>(7));		// Short

	delete test;

    std::cout << "Hello World!\n";
}
