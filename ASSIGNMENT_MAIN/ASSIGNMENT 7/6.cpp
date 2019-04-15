#include<iostream>
#include<ctype.h>
#include<cmath>
using namespace std;
template <class T1,class T2>
class Int_Int{
	T1 x;
	T2 y;
	public:
		Int_Int(T1 x,T2 y){
			this->x = x;
			this->y = y;
			try{
			if(isalpha(x))
				throw x;
			if(isalpha(y))
				throw y;
			if(y == 0)
				throw y;
			if((floor(x)) != x)
				throw x;
			if((floor(y)) != y)
				throw y;
			 cout << "Division (int) : " << x << " / " << y << " = " << x/y << endl;
			}
			catch(char x){
				cout << "One variable is char type. ";
				cout << "Division is not possible." <<  endl;
			}
			catch(float n1){
				cout << "Division(float) : " << x << " / " << y << " = " << x/y << endl;
			}
			catch(int n){
				cout << "Caught : " << n << endl;
				cout << "Division is not possible." <<  endl;
			}
		}
};
int main(){
	Int_Int<int,int> I(1,2);
	Int_Int<int,float> I1(1,2.3);
	Int_Int<float,int> I2(1.6,2);
	Int_Int<float,float> I3(2.3,2.5);
	Int_Int<int,int> I4(1,0);
	Int_Int<int,int> I5(0,1);
	Int_Int<int,char> I6(1,'A');
	return 0;
}
