#pragma once
#include "MenuItem.h"
#include "NullMenuItem.h"
#include <vector>
#include <functional>
#include <memory>

using std::vector;
using std::reference_wrapper;

class Menu : public MenuItem
{
private:
	short _menuValueCount = 1;
	vector<reference_wrapper<MenuItem>> _menuItems;
	NullMenuItem _nullMenuItem;
public:
	Menu(string description) : 
		MenuItem(description), 
		_menuItems(vector<reference_wrapper<MenuItem>>()), 
		_nullMenuItem(NullMenuItem()) {};
	
	vector<reference_wrapper<MenuItem>> GetMenuItems() const { return _menuItems; };
	MenuItem* GetNullMenuItem() { return &_nullMenuItem; };
	
	void AddMenuItem(MenuItem& menuItem);

	virtual void Execute() override;
};

