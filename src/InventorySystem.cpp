//============================================================================
// Name        : InventorySystem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Creating a Inventory System in C++, Ansi-style
//============================================================================

#include<iostream>
#include<algorithm>
#include<assert.h>

using namespace std;

const int Max_Items = 10;
const int Max_Customers = 10;

struct item {
	int id;
	string name;
	int total_stock;
	int total_sold;

	item() {
		total_stock = total_sold = 0;
		id = -1;
		name = "";
	}

	void read() {
		cout<<"Enter the item details: id, name, total stock: ";
		cin >> id >> name >> total_stock;
		total_sold = 0;
	}

	bool sell(int customer_id){
		if (total_stock - total_sold == 0)
			return false;
		++total_sold;
		return true;
	}

	void return_item() {
		assert(total_sold > 0);
		--total_sold;
	}

};

bool cmp_item_by_name(item &a, item &b){

}

bool cmp_item_by_id(item &a, item &b){

}

struct customer {

}

struct inventory_system {
	int total_items;
	item items[Max_Items];
	int total_customers;
	customer customers[Max_Customers];

	inventory_system() {
		total_items = total_customers = 0;
	}

	void run() {
		while (true) {
			int selection = menu;

			if (selection == 1)
				add_item();
			else if (selection == 2)
				search_items_by_index();
			else if (selection == 3)
				print_who_took_item_by_name();
			else if (selection == 4)
				print_store_by_id();
			else if (selection == 5)
				print_store_by_id();
			else if (selection == 6)
				add_customer();
			else if (selection == 7)
				customer_loan_item();
			else if (selection == 8)
				customer_pay_item();
			else if (selection == 9)
				print_customers();
			else
				break
		}
	}

	int menu() {

	}
}
