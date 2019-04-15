#include<iostream>
using namespace std;
template <class T>
void leastnumber(T a,T b,T c){
	(a < b) ? ((a < c) ? cout << "\n" << a << " is Least\n " : cout << c << " is least.\n") : ((b < c) ? cout << b << " is least.\n" : cout << c << " is least.\n");
} 
int main(){
	leastnumber(2,3,4);
	leastnumber(1,2,3);
	leastnumber('A','B','C');
	return 0;	
}
