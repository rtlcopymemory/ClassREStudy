#include "TestClass.h"

TestClass::TestClass() {
	__asm {
		db 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF
	}
	this->testValue = 42;
}

TestClass::~TestClass() {
	__asm {
		db 0xFF, 0xEE, 0xDD, 0xCC, 0xBB, 0xAA
	}
	this->testValue = 0;
}

int TestClass::getTestValue() const {
	__asm {
		db 0x11, 0x22, 0x33, 0x44, 0x55, 0x66
	}
	return this->testValue;
}

void TestClass::setTestValue(int value) {
	__asm {
		db 0x77, 0x88, 0x99, 0xAA, 0xBB, 0xCC
	}
	this->testValue = value;
}

void TestClass::staticFunction() {
	__asm {
		db 0x01, 0x02, 0x03, 0x04, 0x05, 0x06
	}
	staticValue = 100;
}

int TestClass::getStaticValue() {
	__asm {
		db 0x24, 0x20, 0x30, 0x40, 0x50, 0x60
	}
	return staticValue;
}

void TestClass::setStaticValue(int value) {
	__asm {
		db 0x74, 0x80, 0x90, 0xA0, 0xB0, 0xC0
	}
	staticValue = value;
}

void TestClass::virtualFunction() {
	__asm {
		db 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6
	}

	this->testValue = 0;
	TestClass::setStaticValue(0);
}

void TestClass::pureVirtualFunction()
{
	__asm {
		db 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6
	}
	
	this->testValue = -1;
	TestClass::setStaticValue(-1);
}

// Define the static member variable
int TestClass::staticValue = 0;
