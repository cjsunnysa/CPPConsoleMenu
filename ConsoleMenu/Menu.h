#pragma once
#include "MenuItem.h"
#include "NullMenuItem.h"
#include <vector>
#include <memory>

using std::vector;
using std::unique_ptr;
using std::make_unique;

class Menu : public MenuItem
{
private:
	short _menuValueCount = 1;
	vector<MenuItem*> _menuItems;
	NullMenuItem _nullMenuItem;
public:
	Menu(string description) : 
		MenuItem(description), 
		_menuItems(vector<MenuItem*>()), 
		_nullMenuItem(NullMenuItem()) {};
	
	vector<MenuItem*> GetMenuItems() const { return _menuItems; };
	MenuItem* GetNullMenuItem() { return &_nullMenuItem; };
	
	void AddMenuItem(MenuItem* menuItem);

	virtual void Execute() override;
};

