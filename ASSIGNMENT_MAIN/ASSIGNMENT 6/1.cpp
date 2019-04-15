#include<iostream>
#include<ctype.h>
#include<cmath>
using namespace std;
template <class T1,class T2>
class TRY_CATCH{
	int n,m,div;
	public:
		TRY_CATCH(T1 n1,T2 n2){
		try{
			if(isalpha(n1))
				throw n1;
			if(isalpha(n2))
				throw n2;
			if((floor(n1)) != n1)
				throw n1;
			if((floor(n2)) != n2)
				throw n2;
			if(n2 == 0)
				throw n2;
			else{
				n = n1;
				m = n2;
				div = n/m;
				cout <<"Division : " <<  n << " / " << m << " = "  << div << endl;
			}
		}
		catch(...){
			cout << "Division is not possible.\n";
		}
	}
//		catch(T1 m){
//				cout << "Caught : " << m << endl;
//				cout << "Division is not possible.\n";		
//		}
//		catch(T2 n){
//			cout << "Caught : " << n << endl;
//			cout << "Division is not possible.\n";
//		}
//		catch(T1 n1,T2 n2){
//			cout << "Caught : " << n << " " <<  m << endl;
//			cout << "Division is not possible.\n";
//		}		
};
int main(){
	TRY_CATCH<int,int> t(1,2);
	TRY_CATCH<int,int> t5(1,0);
	TRY_CATCH<int,int> t6(0,2);
	TRY_CATCH<int,char> t1(1,'A');
	TRY_CATCH<int,float> t2(1,2.4);
	TRY_CATCH<char,char> t3('B','A');
	TRY_CATCH<float,float> t4(1.2,2.4);
	return 0;
}
