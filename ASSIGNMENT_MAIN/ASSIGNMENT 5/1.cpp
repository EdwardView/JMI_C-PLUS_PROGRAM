#include<iostream>
using namespace std;
class pointer{
	int a,b,c;
	public:
		pointer(int,int,int);
		void leastnumber();
};
pointer :: pointer(int n1,int n2,int n3){
	this->a = n1;	this->b = n2;	this->c = n3;
}
void pointer :: leastnumber(){
	(this->a < this->b) ? ((this->a < this->c) ? cout << "\n" << a << " is Least\n " : cout << c << " is least.\n") : ((this->b < this->c) ? cout << b << " is least.\n" : cout << c << " is least.\n");
} 
int main(){
	pointer p1(2,3,4);
	pointer p2(3,2,4);
	pointer p3(3,4,2);
	p1.leastnumber();
	p2.leastnumber();
	p3.leastnumber();
	return 0;	
}
