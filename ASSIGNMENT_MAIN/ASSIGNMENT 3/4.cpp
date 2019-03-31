#include<iostream>
using namespace std;
class DISTANCE {
	int feet,inches;
	public:
		DISTANCE(){}
		DISTANCE(int,int);
		void getdata();
		void show();
		bool operator <(DISTANCE &D);
		DISTANCE& operator +=(DISTANCE &D);
		void NormalizeF_I(); 
};
DISTANCE :: DISTANCE(int f,int i){
	feet = f;
	inches = i;
	NormalizeF_I();
}
void DISTANCE :: getdata(){
	cout << "Enter the data(feet/inches) :";
	cin >> feet >> inches;
	NormalizeF_I();
}
void DISTANCE :: show(){
	cout << "\n\tDATA \n FEET -> " << feet << "\nINCHES -> " << inches << endl;
}
void DISTANCE :: NormalizeF_I(){
	int temp = inches/12;
	feet = feet + temp;
	inches = inches % 12;
	
}
bool DISTANCE :: operator < (DISTANCE &D){
	float inches1,inches2;
	inches1 = feet*12+inches;
	inches2 = D.feet*12+D.inches;
	if(inches1 < inches2)
		return true;
	else
		return false;	
}
DISTANCE& DISTANCE :: operator +=(DISTANCE &D){
	
	feet = feet + D.feet;
	inches = inches + D.inches;
	NormalizeF_I();
	return *this;
}
int main(){
	int temp;
	do{
		DISTANCE D,D1;
		D.getdata();
		D.show();
		D1.getdata();
		D1.show();
		if(D<D1)
			cout << "\n\tDistance 1 is less than distacne 2";
		else
			cout << "\n\tDistance 1 is not less than distacne 2";
		D += D1;
		D.show();
		cout << "To continue press 1.\n else press any key.\n";
		cin >> temp;
	}while(temp == 1);
	return 0;
}
