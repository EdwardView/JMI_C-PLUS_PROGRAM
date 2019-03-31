#include<iostream>
#include<string>
using namespace std;
class STRING{
	string str;
	public:
		STRING();
		STRING& operator +(STRING &);
		bool operator ==(STRING &);
		void show();
};
STRING :: STRING(){
	cout << "\nEnter the string :\n";
	fflush(stdin);
	getline(cin,str);
	fflush(stdin);
	//getchar();

}
STRING& STRING :: operator +(STRING &S){ // STRING CONCATINATION USING OPERATOR OVERLOADING (+) 
	str = str + S.str;
	return *this;
}
bool STRING :: operator ==(STRING &S){ // STRING COMPARASION USING OPERATOR OVERLOADING (==)

	if((this->str == S.str) == 1) 
		return 1;
	else
		return 0;
}
void STRING :: show(){
	cout << "\nString :\t" << str;
} 
int main(){
	int temp,ch;
	do{
		STRING S1,S2;
		S1.show();
		S2.show();
	int flag=0;
	while(flag==0){
		
		cout << "\nEnter Your choice :\n1.CONCATINATE STRING\n2.COMPARE STRING\n\n";
		fflush(stdin);
		cin >> ch;
		switch(ch){
			case 1:{
					S1 + S2;
					S1.show();
					flag = 1;
					break;
				}
			case 2:{
				if(S1 == S2)
					cout << "\nString 1 is Equal to String 2\n";
				else
					cout << "\nString 1 is Not Equal to String 2\n";
				flag = 1;
				break;
			}
			default :{
				 cout << "Ivalid Option.\n";
			}
		}
	}
	cout << "\nTo continue press 1.\n else press any key.\n";
	cin >> temp;
	}while(temp == 1);
	return 0;
}
