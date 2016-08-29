#pragma once
#include "ExecutableMenuItem.h"
#include "Menu.h"

using std::string;

const static string FILENAME = "lastexecuteditem.txt";

class FileHandler
{
public:
	static void SaveLastExecutedItem(ExecutableMenuItem& executableItem);
	static MenuItem* GetLastExecutedItem(Menu& mainMenu);

private:
	static MenuItem* FindMatchingMenuItem(Menu &mainMenu, string menuItemDescription);
};

