#pragma once
#include "Menu.h"

class MenuPrinter
{
private:
	static void PrintHeader(string& header);
	static void PrintMenuItems(vector<reference_wrapper<MenuItem>>& menuItems);
	static string FormatHeader(string& header);
	static string FormatMenuItem(MenuItem& menuItem);
	static string CreateReturnExitItem();
	static string FormatMenuValue(string& value);
	static string FormatMenuDescription(string& value);
public:
	static void PrintMenu(Menu* menu);
};

