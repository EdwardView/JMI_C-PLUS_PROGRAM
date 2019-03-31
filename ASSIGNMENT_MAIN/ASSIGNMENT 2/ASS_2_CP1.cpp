#include<iostream>
using namespace std;
class complex{
    int real,img;
    public :
    		complex();
            complex(int);
            complex(int,int);
			friend void display(complex &);
            friend complex sum(complex &,complex &);
};
complex :: complex(){
}
complex :: complex(int temp){
     real = img = temp;
}
complex :: complex(int temp1,int temp2){
	real = temp1;
	img = temp2;
}
complex sum(complex &c1,complex &c2){
	complex t;
	t.real = c1.real + c2.real;
	t.img = c1.img + c2.img;	
	return t;
}
void display(complex &c){
	cout << "IMAGINARY DATA : " << c.real << " + " << c.img << "i" << endl;
}
int main(){
	int n;
	do{
		complex c1(2),c2(2,3);
		complex c3 = sum(c1,c2);
		display(c3);
		cout << "To continue press 1 else press any key.\n";
		cin >> n;
	}while(n == 1);
	return 0;
}
