#include <iostream>
using namespace std;

int main()
{
	
	//	make a menu for a easypaisa like *786# functions and process should be same
	// 1. USE SWITCH STATEMENT
	// 2. USE IF ELSE IF 
	// 3. DON'T USE FUNCTIONS ETC (do this in next version of this software)
	
	int choice, acc_details, send_amount;
	int old_pin = 1234, new_pin1, new_pin2;
	int reciever_acc, reciever_amount, verify_pin;
	
	//	Main Menu
	cout<<"\t*** Main Menu ***\n"<<endl;
	cout<<"1. Account details"<<endl;
	cout<<"2. Send money"<<endl;
	cout<<"3. Pay bills"<<endl;
	
	cin>>choice;
	
	
	if (choice == 1)
	{
		int acc_detail;
		//	Account details
		cout<<system("CLS")<<endl;
		cout<<"\t*** Account Details ***"<<endl;
		cout<<"1. Account Details"<<endl;
		cout<<"2. Change PIN"<<endl;
		cout<<"3. Update CNIC Expiry"<<endl;
		cin>>acc_detail;
		
		// conditions
		// Account Details
		if (acc_detail == 1)
		{
			cout<<"Account Number: 0015243652"<<endl;
			cout<<"Accout Title: Sam Miller"<<endl;
		}
		// Change PIN
		else if (acc_detail == 2)
		{
//			int old_pin = 1234, new_pin1, new_pin2;
			cout<<"What is old PIN: ";
			cin>>old_pin;
			if (old_pin == 1234)
			{
				cout<<"Enter your new PIN (two times): "<<endl;
				cin>>new_pin1>>new_pin2;
				if (new_pin1 == new_pin2)
				{
					cout<<"PIN is changed to: "<<new_pin1<<endl;
				}
				else
				{
					cout<<"PIN not matched";
				}
			}
			else
			{
				cout<<"Invalid old PIN"<<endl;
			}
		}
		
		
		// Update NIC expiry
		else if (acc_detail == 3)
		{
			int old_nic_expiry = 11182024, new_nic_expiry;
			cout<<"What is old NIC expiry: ";
			cin>>old_nic_expiry;
			if (old_nic_expiry == 11182024)
			{
				cout<<"Enter your new CNIC expiry: "<<endl;
				cin>>new_nic_expiry;
				cout<<"CNIC expiry updated to: "<<new_nic_expiry<<endl;
			}
			else
			{
				cout<<"Invalid old CNIC expiry"<<endl;
			}
		}
	}
	
	else
	if(choice == 2)
	{
	
		//	Send money
		cout<<system("CLS")<<endl;
		cout<<"\t*** Send Money ***"<<endl;
		cout<<"Please enter account number: ";
		cin>>reciever_acc;
		cout<<"Enter amount: ";
		cin>>reciever_amount;
		
		cout<<"The amount of Rs. "<<reciever_amount<<" send to: "<<reciever_acc<<"\ntransection done"<<endl;
		/* 
		Add this as well
		
		cout<<"Enter your PIN: ";
		cin>>new_pin1;
		verify_pin == new_pin1 || old_pin;
		if (verify_pin == new_pin1 || new_pin2 || old_pin)
		{
			cout<<"The amount of Rs. "<<reciever_amount<<" send to: "<<reciever_acc<<"\ntransection done"<<endl;
		}
		else
		{
			cout<<"Invalid PIN!"<<endl;
		}
		
		*/
		// conditions
		
		// to wallet
		
	}
	
	else 
	if(choice == 3)
	{
		//	Pay bills
		cout<<system("CLS")<<endl;
		cout<<"\t*** Pay Bills ***"<<endl;
		cout<<"1. Water"<<endl;
		cout<<"2. Internet"<<endl;
		cout<<"3. Gas"<<endl;
		cout<<"4. Telephone"<<endl;
		cout<<"5. Eletricity"<<endl;
		cout<<"6. Other government"<<endl;
	}
	
	else
	{
		cout<<"Invalid input!"<<endl;
	}
	
	return 0;
}
