#include<iostream>
#include<iomanip>
using namespace std;
class STUDENT{
	protected :
	int roll_num;
	string name;
		public:
		void get();
		void display();
};
void STUDENT :: get(){
	cout << "Entre the student name : "; fflush(stdin); getline(cin,name);
	cout << "Entre the student roll_number : "; cin >> roll_num; 
}
void STUDENT :: display(){
	cout << setw(20) << name << "\t" << roll_num << "\t";
}
class MARKS : public STUDENT{
	protected :
		int mark1,mark2;
	public:
		void getmark();
		void display_mark();
};
void MARKS :: getmark(){
	cout << "Entre the marks of Subject  \nSubject English marks : " ;
	cin>>mark1;
	cout << "\nSubject Maths mark : ";
	cin>>mark2;
}
void MARKS :: display_mark(){
	cout << mark1 << "\t" << mark2 <<"\t";
}

class Result : public MARKS{
	int total;
	public:
		void cal_result();
		void display_result();
};
void Result :: cal_result(){
	total = (mark1+mark2)/2;
}
void Result :: display_result(){
	if(total > 66)
		cout << "PASS" << endl;
	else
		cout << "FAIL\n";
}

int main(){
	Result R[2];
	for(int i=0; i<2; i++){
		R[i].get();
		R[i].getmark();
		R[i].cal_result();
	}
	for(int i=0; i<60; i++)
		cout << "-"; 
	cout << "\n";
	cout << setw(16) <<"NAME"<< "\tROLL\tEnglish  Maths\tResult\n";
	for(int i=0; i<60; i++)
		cout << "-";
	cout << "\n";
	for(int i=0; i<2; i++){
		R[i].display();
		R[i].display_mark();
		R[i].display_result(); 
	}
	return 0;
}

