#include "SingletonClass.h"
#include <iostream>
static SingletonClass* singletonClass = nullptr;
SingletonClass::SingletonClass()
{
	std::cout << " Singleton Object created" << std::endl;
}
SingletonClass::~SingletonClass()
{

}

SingletonClass* SingletonClass::getInstance() {
	if (singletonClass == nullptr)
	{
		singletonClass = new SingletonClass();
	}
	return singletonClass;
}
