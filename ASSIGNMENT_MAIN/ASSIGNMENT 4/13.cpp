#include<iostream>
using namespace std;
class B;
class C;
class D;
class A{
	public:
	friend class B;
	friend class C;
	friend class D;
	private:
		void displayA(){
			cout << "A function" << endl;
		}
};
class B{
	public:
		void displayB(){
			cout << "B function" << endl;
			A a;
			a.displayA();
		}
		friend class D;
};

class C{
	private:
		void displayC(){
			cout << "C function" << endl;
			A a;
			a.displayA();
		}
	friend class D;
};
class D{
	public:
		void displayD(){
			cout << "D function" << endl;
			A a;	B b;	C c;
			b.displayB();
			c.displayC();
			a.displayA();
		}		
};
int main(){
//	B b;
//	b.displayB();
	D d;
	d.displayD();
	return 0;
}
