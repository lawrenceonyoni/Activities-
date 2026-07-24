//Nickson Basweti
//TASK 1: Mobile Phone Sales Receipt system
#include <iostream>
#include <cstring>

using namespace std;

float sales_amount(int quantity_bought, float price_per_phone);

int main()
{
    string customer_name, phone_model_purchased;
    int quantity_bought;
    float price_per_phone, TSA;
    
    cout<<"enter customer name, phone model, quantity bought, price per phone: "<<endl;
    cin>>customer_name>>phone_model_purchased>>quantity_bought>>price_per_phone;
    
    TSA=sales_amount(quantity_bought,price_per_phone);
    
    cout << "\n---RECEIPT SUMMARY---" << endl;
    cout << "Customer Name: " << customer_name << endl;
    cout << "Phone Model: " << phone_model_purchased << endl;
    cout << "Quantity: " << quantity_bought << endl;
    cout << "Price per Phone: $" << price_per_phone << endl;
    cout << "Your total sales amount is: $" << TSA << endl;        
    return 0;
};

float sales_amount(int quantity_bought,float price_per_phone)
{
    float TSA;
    TSA=quantity_bought*price_per_phone;
    return TSA;
};
