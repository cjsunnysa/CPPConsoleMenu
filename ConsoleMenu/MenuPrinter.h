#pragma once
#include "Menu.h"

class MenuPrinter
{
private:
	static void PrintMenuItems(const vector<reference_wrapper<MenuItem>>& menuItems);
	static string FormatHeader(const string& header);
	static string FormatMenuItem(const MenuItem& menuItem);
	static string CreateReturnExitItem();
	static string FormatMenuValue(const string& value);
	static string FormatMenuDescription(const string& value);
public:
	static void PrintHeader(const string& header);
	static void PrintMenu(const Menu& menu);
};

