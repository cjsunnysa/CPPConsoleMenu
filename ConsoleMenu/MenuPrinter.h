#pragma once
#include "Menu.h"

class MenuPrinter
{
private:
	static void PrintHeader(string header);
	static void PrintMenuItems(vector<MenuItem*> menuItems);
	static string FormatHeader(string header);
public:
	static void PrintMenu(Menu* menu);
};

