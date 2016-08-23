#pragma once

using std::string;
using std::to_string;

class MenuItem
{
private:
	string _menuItemValue = "-1";
	string _menuItemDescription;
protected:
	MenuItem* _returnMenuItem;
	
	MenuItem(string description) : 
		_menuItemDescription(description),
		_returnMenuItem(nullptr)
	{ };
public:
	void SetMenuItemValue(short value) { _menuItemValue = to_string(value); }
	void SetReturnMenuItem(MenuItem* returnMenuItem) { _returnMenuItem = returnMenuItem; }

	string GetMenuItemValue() const	{ return _menuItemValue; }
	string GetMenuItemDescription() const { return _menuItemDescription; };
	MenuItem* GetReturnMenuItem() const	{ return _returnMenuItem; }
	
	bool MatchesSelection(string selection);
	virtual void Execute() = 0;
};

