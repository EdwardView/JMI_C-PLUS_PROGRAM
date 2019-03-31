#include<iostream>
using namespace std;
class CONVERT {
	int feet,inches;
	public:
		CONVERT(){}
		CONVERT(int,int);
		void getdata();
		void show();
		float convet_FI_meter();
		void NormalizeF_I(); 
};
void CONVERT :: getdata(){
	cout << "Enter the data(feet/inches) :";
	cin >> feet >> inches;
	NormalizeF_I();
}
void CONVERT :: show(){
	cout << "\n\tDATA \n\tFEET -> " << feet << "\n\tINCHES -> " << inches << endl;
}
void CONVERT :: NormalizeF_I(){
	int temp = inches/12;
	feet = feet + temp;
	inches = inches % 12;
}
float CONVERT :: convet_FI_meter(){
	return (feet*12 + inches)*0.0254;
}
int main(){
	int temp;
	do{
		CONVERT C;
		C.getdata();
		C.show();
		float M = C.convet_FI_meter();
		cout << "\tIn Meter : " << M << "M" << endl;
		cout << "To continue press 1.\n else press any key.\n";
		cin >> temp;
	}while(temp == 1);
	return 0;
}
