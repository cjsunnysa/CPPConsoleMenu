#include "stdafx.h"
#include "PolymorphismByReference.h"
#include <iostream>

using std::cout;
using std::endl;

void PolymorphismByReference::Execute()
{
	Duck duck;
	RubberDuck rubberDuck;
	DecoyDuck decoyDuck;

	cout << "Quack by pointer: " << endl;
	cout << endl;

	Duck* pDuck = &duck;
	pDuck->Quack();

	pDuck = &rubberDuck;
	pDuck->Quack();

	pDuck = &decoyDuck;
	pDuck->Quack();
	
	cout << endl;
	cout << "Quack by reference: " << endl;
	cout << endl;

	MakeDuckQuack(duck);
	MakeDuckQuack(rubberDuck);
	MakeDuckQuack(decoyDuck);

	cout << endl;

	_returnMenuItem->Execute();
}

void PolymorphismByReference::MakeDuckQuack(Duck& duck)
{
	duck.Quack();
}
