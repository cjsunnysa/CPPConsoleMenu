#include "stdafx.h"
#include "MenuItem.h"

bool MenuItem::MatchesSelection(string selection)
{
	string uppercaseMenuItemValue;
	string uppercaseSelection;
	
	for (auto& ch : _menuItemValue)
		uppercaseMenuItemValue += toupper(ch);

	for (auto& ch : selection)
		uppercaseSelection += toupper(ch);

	return uppercaseMenuItemValue.compare(uppercaseSelection) == 0;
}
