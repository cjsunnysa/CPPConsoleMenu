#pragma once
#include "ExecutableMenuItem.h"
#include <iostream>

using std::cout;
using std::endl;

class PolymorphismByReference :
	public ExecutableMenuItem
{
private:
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

	void MakeDuckQuack(Duck& duck);
public:
	PolymorphismByReference() :
		ExecutableMenuItem("Polymorphism By Reference") {};

	void ExecuteFunction() override;
};

