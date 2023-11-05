#pragma once
class SingletonClass
{

	SingletonClass();
	~SingletonClass();
public:
	static SingletonClass* getInstance();
};

