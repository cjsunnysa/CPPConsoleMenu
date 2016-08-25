#include "stdafx.h"
#include "ExecutableMenuItem.h"
#include "MenuPrinter.h"
#include <iostream>

using std::cout;
using std::endl;

void ExecutableMenuItem::Execute()
{
	cout << "================================================" << endl;
	cout << endl;

	MenuPrinter::PrintHeader(this->GetMenuItemDescription());

	cout << endl;

	ExecuteFunction();

	cout << endl;

	cout << "================================================" << endl;

	cout << endl;
	cout << endl;

	if (_returnMenuItem == nullptr)
		return;

	_returnMenuItem->Execute();
}
