#include<iostream>
using namespace std;
class complex{
    int real,img;
    public :
    		complex(){}
            void getdata();
            void show();
            complex operator +(complex &);
       //     friend complex operator +(complex &,complex &);
};
void complex :: getdata(){
    cout << "Enter the Data : \n";
    cout << "Real value : ";
    cin >> real;
    cout << "Imaginery value : ";
    cin >> img;
}
void complex :: show(){
    cout << "\nComplex Number : " << real << " + " << img << "i";
}
complex complex :: operator +(complex &t){
	complex temp;
	temp.real = real + t.real;
	temp.img = img + t.img;
	return temp;
}
//complex operator +(complex &t,complex &t1){ // friend function defination
//	complex temp;
//	temp.real = t.real + t1.real;
//	temp.img = t.img + t1.img;
//	return temp;
//}
int main(){
    char ch;
    do{
        complex c1,c2,c3;
        c1.getdata();
        c2.getdata();
        c1.show();
        c2.show();
        c3 = c1 + c2;
        c3.show();
        cout << "\n\tTo continue press Y otherwise press any key.\n"; getchar(); cin >> ch;
    }while(ch == 'Y' || ch == 'y');
    return 0;
}
