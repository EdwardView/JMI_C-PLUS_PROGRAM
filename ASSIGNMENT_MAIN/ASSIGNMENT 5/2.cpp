#include<iostream>
using namespace std;
class polygon{
	protected:
	float width,height;
	public:
		   virtual 	void set_value(float w,float h){
				width = w;	height = h;
				cout << "Base class function.\n";
			}
};
class rectangle : public polygon{
	public:
		void calculate_area(){
		cout << "Area of rectangle : " << (width*height)<< endl;
		}
};
class triangle : public polygon{
	public:
		void calculate_area(){
		cout << "Area of triangle : " << (width*height)/2<< endl;
		}
};
int main(){
//	rectangle rect;
	polygon *ptr = new rectangle;
	ptr->set_value(4.5,5.5);
	((rectangle*)ptr)->calculate_area();
	((triangle*)ptr)->calculate_area();
	
	return 0; 
}
