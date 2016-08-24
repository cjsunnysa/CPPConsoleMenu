#pragma once
#include "MenuItem.h"
#include <iostream>

using std::cout;
using std::endl;

class Duck
{
public:
	virtual void Quack() { cout << "Quack" << endl; }
};

class RubberDuck : public Duck
{
public:
	void Quack() override { cout << "Squeek" << endl; }
};

class DecoyDuck : public Duck
{
public:
	void Quack() override { cout << "[silence]" << endl; }
};

class PolymorphismByReference :
	public MenuItem
{
private:
	void MakeDuckQuack(Duck& duck);
public:
	PolymorphismByReference() :
		MenuItem("Polymorphism By Reference") {};

	void Execute() override;
};

