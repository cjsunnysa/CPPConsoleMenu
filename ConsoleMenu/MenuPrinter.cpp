#include "stdafx.h"
#include "MenuPrinter.h"
#include "algorithm"
#include "iostream"

using std::cout;
using std::endl;
using std::uppercase;

void MenuPrinter::PrintMenu(Menu* menu)
{
	PrintHeader(menu->GetMenuItemDescription());
	PrintMenuItems(menu->GetMenuItems());
}

void MenuPrinter::PrintHeader(string header)
{
	auto formattedHeader = FormatHeader(header);

	cout << "========= " << formattedHeader << " =========" << endl;
	cout << endl;
}

void MenuPrinter::PrintMenuItems(vector<MenuItem*> menuItems)
{
	for (auto it = menuItems.begin(); it < menuItems.end(); ++it)
		cout << (*it)->GetMenuItemValue() << "\t" << (*it)->GetMenuItemDescription() << endl;

	cout << "x" << "\t" << "Return/Exit" << endl;

	cout << endl;
}

string MenuPrinter::FormatHeader(string header)
{
	for (auto& ch : header)
		ch = toupper(ch);

	return header;
}