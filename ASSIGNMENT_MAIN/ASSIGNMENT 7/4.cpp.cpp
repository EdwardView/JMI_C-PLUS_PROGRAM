#include<iostream>
using namespace std;
template <class T1,class T2,class T3>
void leastnumber(T1 a,T2 b,T3 c){
	(a < b) ? ((a < c) ? cout << "\n" << a << " is Least\n " : cout << c << " is least.\n") : ((b < c) ? cout << b << " is least.\n" : cout << c << " is least.\n");
} 
int main(){
	leastnumber(2,2.5,'A');
	leastnumber(2,3.4,0);
	leastnumber('A','B',2);
	return 0;	
}
