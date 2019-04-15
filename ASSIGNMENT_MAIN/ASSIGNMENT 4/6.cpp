#include<iostream>
#include<string>
using namespace std;
class count{
	int c;
	public :
		count(){}
		count(int);
		int return_C();
		count& operator ++(int);
		void display();
};
//count :: count(){
//	cout << "Enter the Data : \n";
//	cin >> c;
//}
count :: count(int temp){	
	c = temp;
}
int count :: return_C(){
	return c;
}
count& count :: operator ++(int){ // post increament
	c = c++;
	return *this;
}
void count :: display(){
	cout << "Value of class base : " << c << endl;
}
class counter : public count{
	int t;
	public:
		counter(int temp) : count(temp){
		t = temp;
		display();
		}
		counter& operator --();
		void display1();
};
counter& counter :: operator --(){
	t = --t;
	return *this; 
}
void counter :: display1(){
	cout << "Value of derive class  : " << t << endl;  
}
int main(){
	counter c1(5);
	--c1;
	c1.display(); // base class 
	c1.display1(); // deriv class
}

