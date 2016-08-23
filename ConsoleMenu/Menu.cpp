#include "stdafx.h"
#include "Menu.h"
#include "MenuPrinter.h"
#include "MenuItemSelector.h"
#include <iostream>
#include <memory>

void Menu::AddMenuItem(MenuItem* menuItem)
{
	menuItem->SetReturnMenuItem(this);
	menuItem->SetMenuItemValue(_menuValueCount++);

	_menuItems.emplace_back(menuItem);
}

void Menu::Execute()
{
	MenuItem* selectedMenuItem(nullptr);

	do
	{
		std::cout << std::endl;
		std::cout << std::endl;

		MenuPrinter::PrintMenu(this);
		selectedMenuItem = MenuItemSelector::GetMenuItemSelection(this);

	} while (selectedMenuItem == nullptr);
	
	selectedMenuItem->Execute();
}
