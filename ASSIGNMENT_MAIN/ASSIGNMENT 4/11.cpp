#include<iostream>
using namespace std;
class BASE1{
	private:
		int num1;
	protected :
		int num1;
		int num2;
	public:
		int num3;
		BASE1(int n1,int n2,int n3){
			num1 = n1;	num2 = n2;	num3 = n3;
		}
//		void display(){
//			cout << "NUM1 : " << num1 << "\nNUM2 : " << num2 << "\nNUM3 : " << num3 << endl;
//		}
};
class BASE2 /*: public BASE1*/{
	private:
		int num4;
	protected :
		int num5;
	public:
		int num6;
		BASE2(int n4,int n5,int n6) /*: BASE1(n4,n5,n6)*/{
			num4 = n4;	num5 = n5;	num6 = n6;
		}	
//		void display(){
//			cout << "NUM4 : " << num4 << "\nNUM5 : " << num5 << "\nNUM6 : " << num6 << endl;
//			cout << "NUM1 : " << num1 << "\nNUM2 : " << num2 << "\nNUM3 : " << num3 << endl;
//		}
		friend class BASE1;
};
class Derive : public BASE1,public BASE2{
	public:
		Derive(int n1,int n2,int n3):BASE1(n1,n2,n3),BASE2(n1,n2,n3){}
		void display(){
			cout << "NUM4 : " << num4 << "\nNUM5 : " << num5 << "\nNUM6 : " << num6 << endl;
			cout << "NUM1 : " << num1 << "\nNUM2 : " << num2 << "\nNUM3 : " << num3 << endl;
		}
};
int main(){
//	BASE1 B1(1,2,3);
//	BASE2 B2(2,3,4);
//	B1.display();
//	B2.display();
	Derive D(2,3,4);
	D.display();
	return 0;
	
}
