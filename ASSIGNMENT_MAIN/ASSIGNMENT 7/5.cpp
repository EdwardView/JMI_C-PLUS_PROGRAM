#include<iostream>
#include<cmath>
using namespace std;
template <class T1,class T2>
class power{
	T1 x;
	T2 y;
	double p;
	public:
		power(T1 x,T2 y){
			this->x = x;
			this->y = y;
			p = 1;
	}
	void power_X_Y(){
		try{
			if(isalpha(x))
				throw x;
			if(isalpha(y))
				throw y;
			if((floor(y)) != y)
				throw y;
			else{
				if(y == 0)
					p = 1;
				else if(x == 0)
					p = 0;
				else{
					for(int i=1; i<=y; i++)
						p = p*x;
					cout << "power of (" << x << " , " << y << " ) = " << p << endl;
				}
			}
		}
		catch(...){
			cout << "Evaluation of Power is not possible.\n";
		}
	}
};
int main(){
	power<int,int> p(2,5);
	p.power_X_Y();
	power<int,float> p1(2,2.5);
	p1.power_X_Y();
	power<float,int> p2(2.5,2);
	p2.power_X_Y();
	power<char,int> p3('A',2);
	p3.power_X_Y();
	power<int,char> p4(2,'A');
	p4.power_X_Y();
	power<char,char> p5('A','B');
	p5.power_X_Y();
	power<float,float> p6(2.5,5.6);
	p6.power_X_Y();
	return 0;
}		
