#include<iostream>
using namespace std;
class SHAPE{
	protected:
		float length1,length2,length3;
		public:
			SHAPE(int len){length1 = len; }
			SHAPE(int len1,int len2){length1 = len1; length2 = len2; } 
			SHAPE(int len1,int len2,int len3){ length1 = len1; length2 = len2; length3 = len3; }
			virtual void Area();
			virtual void display();
};
void SHAPE :: Area(){}
void SHAPE :: display(){}

class Circle: public SHAPE{
	public:
		Circle(int n):SHAPE(n){}
		void Area();
		void display();
};
void Circle :: Area(){
	cout << "Area is : " << 3.14*length1*length1 << endl;
}
void Circle :: display(){
	cout << "Shape Name is Circle.\n";
}
class Rectangle: public SHAPE{
	public:
		Rectangle(int n,int m):SHAPE(n,m){}
		void Area();
		void display();
};
void Rectangle :: Area(){
	cout << "Area is : " << 3.14*length1*length1 << endl;
}
void Rectangle :: display(){
	cout << "Shape Name is Rectangle.\n";
}class Trapezoid: public SHAPE{
	public:
		Trapezoid(int n,int m,int z):SHAPE(n,m,z){}
		void Area();
		void display();
};
void Trapezoid :: Area(){
	cout << "Area is : " << ((length1+length2)*length3)/2 << endl;
}
void Trapezoid :: display(){
	cout << "Shape Name is Trapezoid.\n";
}
int main(){
	Circle C1(5);
	C1.Area();
	C1.display();
	
	Rectangle r1(5,10);
	r1.Area();
	r1.display();
	
	Trapezoid t1(5,10,5);
	t1.Area();
	t1.display();
}

