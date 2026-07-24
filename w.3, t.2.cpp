//Lawrence Onyoni
//week 3, task 2

#include <iostream>
#include <string>

using namespace std;

string customer_name;
int no_of_units;
float water_bills, rate=0.5;
float discount_rate=0.1, discount, new_water_bills;

void getCustomerDetails(){
	cout<<"Enter customer name: "<<endl;
	getline(cin, customer_name);
	cout<<"Enter number of units: "<<endl;
	cin>>no_of_units;
}

void calculateBills(){
	water_bills = no_of_units * rate;
}

void applyDiscount(){
	if(no_of_units>100)
		discount =water_bills*discount_rate;
		new_water_bills = water_bills - discount; 
}

void displayBill(){
	cout<<"------Invoice------"<<endl;
	cout<<"Customer Name: "<<customer_name<<endl;
	cout<<"Number of units consumed: "<<no_of_units<<endl;
	cout<<"Water bills before discount: "<<water_bills<<endl;
	cout<<"Water bills after discount (if one has used has reached given conditions): "<<new_water_bills<<" (N0 DISCOUNT)"<<endl;
	cout<<"Final amount payable: "<<water_bills<<" (For the non-discounted), and "<<new_water_bills<<" (For the discounted)"<<endl;
}

int main(){
	getCustomerDetails();
	calculateBills();
	applyDiscount();
	displayBill();
	
	return 0;
}