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
		MARKS(){	mark1 = mark2 = 0; }
		void get();
		void display();
};
void MARKS :: get(){
//	get();
	cout << "Entre the marks of Subject  \nSubject English marks : " ;
	cin>>mark1;
	cout << "Subject Maths mark : ";
	cin>>mark2;
}
void MARKS :: display(){
//	display();
	cout << mark1 << "\t" << mark2 <<"\t";
}

class Result : public MARKS{
	int total;
	public:
		void get();
		void display();
};
void Result :: get(){
//	get();
	total = (mark1+mark2);
}
void Result :: display(){
//	display();
	if(total > 66)
		cout << "PASS" << endl;
	else
		cout << "FAIL\n";
}
int main(){
//	Result R[2];
//	MARKS *Mptr;
//	for(int i=0; i<2; i++){
//		Mptr = &R[i];
//		Mptr->get();
//		
//	}
	Result R[2];
	MARKS *Mptr,M[2]; 
    STUDENT *Sptr;
	for(int i=0; i<2; i++){
		Sptr = &M[i];
		Sptr->get();
	//	Mptr = &R[i]; 
	//	Mptr->get();
		R[i].get();
	}
	for(int i=0; i<60; i++)
		cout << "-"; 
	cout << "\n";
	cout << setw(16) <<"NAME"<< "\tROLL\tEnglish  Maths\tResult\n";
	for(int i=0; i<60; i++)
		cout << "-";
	cout << "\n";

	for(int i=0; i<2; i++){
		Sptr = &M[i];
		Sptr->display();
		Mptr = &R[i]; 
		Mptr->display();
		R[i].display();
	}
	return 0;
}
