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

void MenuPrinter::PrintMenuItems(vector<reference_wrapper<MenuItem>>& menuItems)
{
	for (auto menuItem : menuItems)
		cout << menuItem.get().GetMenuItemValue() << "\t" << menuItem.get().GetMenuItemDescription() << endl;

	cout << "x" << "\t" << "Return/Exit" << endl;

	cout << endl;
}

string MenuPrinter::FormatHeader(string header)
{
	for (auto& ch : header)
		ch = toupper(ch);

	return header;
}