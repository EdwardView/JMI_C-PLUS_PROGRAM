#include<iostream>
using namsesapce std;
static double acc_no = 286400100;
class Bank_Account{
	char first[10],middle[20],last[20];
	long account_no;
	char type_account[15];
	double balance;
	int DD,MM,YY;
	public:
		void initial_value();
		void deposit_amount();
		void withdrawl_amount());
		void display();
		void getupdate();
};
void Bank_Account :: initial_value(){
	cout << "Entre the NAME of Customer :\n";
	while(1){
            cout << "First Name : ";
            cin >> first;
            if(strlen(first) >= 3)
                break;
            else
            {
                cout << "First name should be greater than 3.\n";
                continue;
            }
        }
	cout << "Do you have Middle Name : press Y otherwise press N";	char ch; getchar(); cin >> ch;
	if(ch== 'Y' || ch == 'y')
	{
		cout << "Enter Middle name : ";
		cin >> middle;
	}
	else
		middle[0] = '\0';
	cout << "Do you have last name : press Y otherwise press N :"; getchar(); ch = getchar();
	if(ch == 'Y' || ch == 'y')
	{
		cout << "Enter the last name : ";
		cin >> last;
	}
	else
		last[0] = '\0';

	account_no = acc_no+4;
	acc_no++;
	while(1){
		cout << "Enter the customer account type : \n";
		cin >>type_account;
		if(strcmp(type_account,"saving") == 0  || strcmp(type_account,"current") == 0)
			break;
		else
			continue;
	}
	while(1){
		cout << "Enter the opening balance of customer(>1000) : \n";
		cin >>balance;
		if(balance > 1000)
			break;
		else
			continue;
	}
}

