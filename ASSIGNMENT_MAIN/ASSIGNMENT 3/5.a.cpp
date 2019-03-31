#include<iostream>
#include<string>
using namespace std;
class T{
	int a,b;
	public :
		T();
		void show();
		T& operator ++ ();
		T& operator ++(int);
};
T :: T(){
	cout << "Enter the Data : \n";
	cin >> a >> b;
}
void T :: show(){
	cout << "\na = " << a << "\tb = " << b << endl;
}
T& T :: operator ++(){ // pre increament .
	++a;
	++b;
	return *this;
}
T& T :: operator ++(int){ // post increament
	a = a++;
	b = b++;
	return *this;
}
int main(){
	int temp;
	do{
		T t;
		t.show();
		t++; // post increament i.e first use the value then increament its value.
		cout << "AFter post Increament.\n";
		t.show();
		++t; // pre increament i.e first increament the value then use its value.
		cout << "After the pre increament.\n";
		t.show();
	cout << "\nTo continue press 1.\n else press any key.\n";
	cin >> temp;
	}while(temp == 1);
	return 0;
}
