#include<iostream>
using namespace std;
class complex{
    int real,img;
    public :
            void getdata();
            void show();
            void sum(complex &,complex &);
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
void complex :: sum (complex &c1,complex &c2){
    real = c1.real + c2.real;
    img = c1.img + c2.img;
}
int main(){
    char ch;
    do{
        complex c1,c2,c3;
        c1.getdata();
        c2.getdata();
        c1.show();
        c2.show();
        c3.sum(c1,c2);
        c3.show();
        cout << "\n\tTo continue press Y otherwise press any key.\n"; getchar(); cin >> ch;
    }while(ch == 'Y' || ch == 'y');
    return 0;
}
