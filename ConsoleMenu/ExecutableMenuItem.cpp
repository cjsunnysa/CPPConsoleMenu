#include "stdafx.h"
#include "ExecutableMenuItem.h"
#include "MenuPrinter.h"
#include <iostream>
#include "FileHandler.h"

using std::cout;
using std::endl;

void ExecutableMenuItem::Execute()
{
	FileHandler::SaveLastExecutedItem(*this);

	system("cls");

	MenuPrinter::PrintHeader(this->GetMenuItemDescription());

	cout << endl;

	ExecuteFunction();

	cout << endl;
	cout << endl;

	if (_returnMenuItem == nullptr)
		return;

	_returnMenuItem->Execute();
}
