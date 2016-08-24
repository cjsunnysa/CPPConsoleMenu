#include "stdafx.h"
#include "MenuPrinter.h"
#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;
using std::uppercase;

void MenuPrinter::PrintMenu(const Menu& menu)
{
	PrintHeader(menu.GetMenuItemDescription());
	PrintMenuItems(menu.GetMenuItems());
}


void MenuPrinter::PrintHeader(const string& header)
{
	auto formattedHeader = FormatHeader(header);

	cout << "========= " << formattedHeader << " =========" << endl;
	cout << endl;
}

void MenuPrinter::PrintMenuItems(const vector<reference_wrapper<MenuItem>>& menuItems)
{
	for (auto menuItemRef : menuItems)
	{
		auto formattedString = FormatMenuItem(menuItemRef.get());

		cout << formattedString << endl;
	}

	auto returnExitString = CreateReturnExitItem();
	cout << returnExitString << endl;

	cout << endl;
}


string MenuPrinter::FormatHeader(const string& header)
{
	string upperHeader;

	for (auto& ch : header)
		upperHeader += toupper(ch);

	return upperHeader;
}

string MenuPrinter::FormatMenuItem(const MenuItem& menuItem)
{
	auto formattedValue = FormatMenuValue(menuItem.GetMenuItemValue());
	auto formattedDescription = FormatMenuDescription(menuItem.GetMenuItemDescription());

	return string(formattedValue + formattedDescription);
}

string MenuPrinter::CreateReturnExitItem()
{
	auto value = string("x");
	auto desc = string("Return/Exit");

	return FormatMenuValue(value) + FormatMenuDescription(desc);
}


string MenuPrinter::FormatMenuValue(const string& value)
{
	return string("[" + value + "]");
}

string MenuPrinter::FormatMenuDescription(const string& value)
{
	return string("\t" + value);
}