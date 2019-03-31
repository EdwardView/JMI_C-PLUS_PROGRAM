/*APNA BANKING SYSTE-M.*/
//#include<cstdlib>
#include<iostream>
#include<cstdio>
#include<string.h>
//#include"cp5.cpp"
using namespace std;
static double acc_no = 286400100;

class Node
{
    public:
	char first[10],middle[20],last[20];
	long account_no;
	char type_account[15];
	double balance;
	string id,pass;
	//float interest;
	Node *next;
	Node(){
        next = NULL;}
};
class bank_account{
	public :
	    Node *first;
	    bank_account(){first = NULL;}
		void initial_value();
		void deposit_amount(Node *);
		void withdrawl_amount(Node *);
		void display(Node *);
		Node *check_ID_pass(string id,string pas);
};

void bank_account :: initial_value(){
	Node *current = new Node;
	cout << "Entre the NAME of Customer :\n";
	while(1){
            cout << "First Name : ";
            cin >> current->first;
            if(strlen(current->first) >= 3)
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
		cin >> current->middle;
	}
	else
		current->middle[0] = '\0';
	cout << "Do you have last name : press Y otherwise press N :"; getchar(); ch = getchar();
	if(ch == 'Y' || ch == 'y')
	{
		cout << "Enter the last name : ";
		cin >> current->last;
	}
	else
		current->last[0] = '\0';

	current->account_no = acc_no+4;
	acc_no++;
	while(1){
		cout << "Enter the customer account type : \n";
		cin >>current->type_account;
		if(strcmp(current->type_account,"saving") == 0  || strcmp(current->type_account,"current") == 0)
			break;
		else
			continue;
	}
	while(1){
		cout << "Enter the opening balance of customer(>1000) : \n";
		cin >>current->balance;
		if(current->balance > 1000)
			break;
		else
			continue;
	}
	//cout << "User Id is : ";
	//strcpy(current->id,"BOB2018");
	current->id +="BOB2018";
	long temp = current->account_no,dig=0;
	int i=3;  // Bank account last three digit add to the  string BOB2018 to genertae bank account.
	while(i!=0){
		temp = temp%10;
		dig = dig*10 + temp;
		temp /=10;
		i--;
	}
	//string t = to_string(dig);
    //strcat(current->id,t);
    current->id += to_string(dig);;
	cout << "User ID is generate by system : " << current->id << endl;
	while(1){
		cout << "Enter User password : ";
		cin >> current->pass;
		if(current->pass.length() <= 10){
            cout << "Account Created Succesfully.\n";
			break;
		}
		else
		{
			cout << "Invalid password.\n";
			continue;
		}
    }
	Node * prev = first;
	if(prev == NULL){
        first = current;
	}
	else{
        while(prev->next != NULL){
            prev = prev->next;
        }
	prev->next = current;
	}
	system("cls");
}
void bank_account :: deposit_amount(Node * temp)
{
    cout << "Enter the Deposite Amount:\n"; double amt;
    cin >> amt;
    temp->balance = temp->balance+amt;
    cout << "Deposite Succusfully.\n";
}
void bank_account :: withdrawl_amount(Node * temp){
    while(1){
        cout << "Enter the Withdrwal Amount :\n";
        double amt;
        cin >> amt;
        if(amt<temp->balance){
            temp->balance = temp->balance - amt;
            cout << "Withdrwal Susscefully.\n";
            break;
        }
        else{
            cout << "Amount is insufficent .\n";
                continue;
        }
        }
}
void bank_account :: display(Node * temp){
 	cout <<"\n\t\tName of Account holder :" << temp->first << " " <<  temp->middle << " " << temp->last <<"\n\t\tBalance : " << temp->balance;
 	cout <<"\n\t\tAccount Type : " << temp->type_account <<"\n\t\tACCOUNT NUMBER : " << temp->account_no << endl;
}
Node * bank_account :: check_ID_pass(string id,string pas){
  *          Node *current = first;
            while(current != NULL){
                if(current->id.compare(id) == 0 and current->pass.compare(pas)== 0)
                        return current;
                current = current->next;
            }
            return current;
}
int main(){
    bank_account bk;
    char ch;
        cout << "\t\tWELLCOME TO APNA BANKING SYSTEM\n";
        do{
            do{
            cout << "1.Create an Account :\n2.Exit.\n";
            int i;
            cout << "Press key.\n"; cin >> i;
            switch(i){
                case 1:
                        bk.initial_value();
                        system("cls");
                        break;
                case 2:
                        exit(1);

                default:
                        cout << "Invlalid Option./n";
            }
            cout << "To create an account  press y and to exit press any key.\n";
            getchar();
            cin >> ch;
            }while(ch == 'Y' || ch == 'y');
            cout << "\t\tWELLCOME TO APNA BANKING SYSTEM\n";
            while(1){
                cout << "Enter User ID : ";
                string id,pswd;
                cin >> id ;
                cout << "Enter Password : ";
                cin >>pswd;
                Node * temp = bk.check_ID_pass(id,pswd);
                if(temp == NULL){
                cout << "ID and Password is wrong Plz insert valid ID and Password.\n";
                continue;
                }
                else{
                    cout << "Succesfully Login press key to performe\n";
                    while(1){
                    cout << "\t\t1.Withdrwal an amount.\n\t\t2.Deposite an amount.\n\t\t3.display detail of customer.\n\t\t4.exit.\n";
                    int cho;
                    cin >> cho;
                    switch(cho){
                        case 1 :
                                bk.withdrawl_amount(temp);
                                break;
                        case 2:
                                bk.deposit_amount(temp);
                                break;
                        case 3:
                                bk.display(temp);
                                break;
                        case 4:
                                break;
                        default :
                                cout << "Invalid Option.\n";
                                break;
                    }
                    if(cho == 4)
                            break;

                }
            }
            break;
		}
            cout << "To create an account Press key y to continue and N for exit.\n";
            getchar();cin >> ch;
        }while(ch == 'Y' or ch == 'y');
    return 0;
}
