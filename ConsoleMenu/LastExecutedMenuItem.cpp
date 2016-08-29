#include "stdafx.h"
#include "LastExecutedMenuItem.h"
#include "FileHandler.h"
#include <iostream>

using std::cout;
using std::endl;

void LastExecutedMenuItem::Execute()
{
	auto lastExecutedMenuItem = FileHandler::GetLastExecutedItem(_mainMenu);

	if (lastExecutedMenuItem == nullptr)
	{
		cout << endl;

		cout << "Could not find last executed menu item." << endl;

		lastExecutedMenuItem = &_mainMenu;
	}

	lastExecutedMenuItem->Execute();
}
