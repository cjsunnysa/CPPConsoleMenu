// ConsoleMenu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Menu.h"
#include <memory>
#include "PolymorphismByReference.h"
#include "RotateArray.h"
#include "LastExecutedMenuItem.h"
#include "RotateArrayBubble.h"

using std::unique_ptr;

int main()
{
	Menu mainMenu("Main Menu");
	
	Menu chapter1("Chapter 1");
	Menu chapter2("Chapter 2");
	Menu chapter3("Chapter 3");
	Menu chapter4("Chapter 4");
	Menu algorithms("Algorithms");
	Menu experiments("Experiments");
	LastExecutedMenuItem lastExecutedMenuItem(mainMenu);

	Menu exercise1("Exercise 1");
	Menu exercise2("Exercise 2");
	Menu exercise3("Exercise 3");
	Menu exercise4("Exercise 4");
	Menu exercise5("Exercise 5");
	Menu exercise6("Exercise 6");
	Menu exercise7("Exercise 7");
	Menu exercise8("Exercise 8");
	Menu exercise9("Exercise 9");
	
	
	RotateArray rotateArray;
	RotateArrayBubble rotateArrayBubble;
	PolymorphismByReference polyByRef;
	
	chapter1.AddMenuItem(&exercise1);
	chapter1.AddMenuItem(&exercise2);
	chapter1.AddMenuItem(&exercise3);
	
	chapter2.AddMenuItem(&exercise4);
	chapter2.AddMenuItem(&exercise5);
	
	chapter3.AddMenuItem(&exercise6);
	
	chapter4.AddMenuItem(&exercise7);
	chapter4.AddMenuItem(&exercise8);
	chapter4.AddMenuItem(&exercise9);
	
	algorithms.AddMenuItem(&rotateArray);
	algorithms.AddMenuItem(&rotateArrayBubble);
	experiments.AddMenuItem(&polyByRef);

	mainMenu.AddMenuItem(&chapter1);
	mainMenu.AddMenuItem(&chapter2);
	mainMenu.AddMenuItem(&chapter3);
	mainMenu.AddMenuItem(&chapter4);
	mainMenu.AddMenuItem(&algorithms);
	mainMenu.AddMenuItem(&experiments);
	mainMenu.AddMenuItem(&lastExecutedMenuItem);


	mainMenu.Execute();
	
	return 0;
}

