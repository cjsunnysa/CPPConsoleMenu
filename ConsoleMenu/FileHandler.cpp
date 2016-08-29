#include "stdafx.h"
#include "FileHandler.h"
#include "ExecutableMenuItem.h"
#include <fstream>
#include <vcruntime_exception.h>

using std::ofstream;
using std::ifstream;
using std::ios;

void FileHandler::SaveLastExecutedItem(ExecutableMenuItem& executableItem)
{
	auto menuItemDescription = executableItem.GetMenuItemDescription();

	ofstream fileStream(FILENAME);

	if (!fileStream.is_open())
		return;

	fileStream << menuItemDescription << "\n";
	fileStream.close(); 
}

MenuItem* FileHandler::GetLastExecutedItem(Menu& mainMenu)
{
	ifstream fileStream(FILENAME);

	if (!fileStream.is_open())
		return nullptr;

	string executableMenuItemDescription;

	getline(fileStream, executableMenuItemDescription);

	fileStream.close();

	return FindMatchingMenuItem(mainMenu, executableMenuItemDescription);
}

MenuItem* FileHandler::FindMatchingMenuItem(Menu& menu, string menuItemDescription)
{
	for (MenuItem& menuitem : menu.GetMenuItems())
	{
		if (menuitem.GetMenuItemDescription().compare(menuItemDescription) == 0)
			return &menuitem;

		auto asMenu = dynamic_cast<Menu*>(&menuitem);
		if (asMenu != nullptr)
		{
			auto submenuitem = FindMatchingMenuItem(*asMenu, menuItemDescription);
			if (submenuitem != nullptr)
				return submenuitem;
		}
	}

	return nullptr;
}