#include<iostream>
using namespace std;
class STUDENT{
	int roll_num;
	string name,course;
	public:
		void input_student_detail();
		void display_student_detail();
};
void STUDENT :: input_student_detail(){
	cout << "Entre the student Roll Number :\n";
	cin>>roll_num;
	fflush(stdin);
	getchar();
	cout << "Enter the name of student :\n";
	getline(cin,name);
	cout << "Entre the coures name : \n";
	cin>>course;
}
void STUDENT :: display_student_detail(){
	cout << "\n\t\tROLL NUMBER : " << roll_num << "\n\t\tSTUDENT NAME : " << name << "\n\t\tCOURSE NAME : " << course << endl;
}
class EXAM : public STUDENT{
	float mark1,mark2,mark3;
	public:
		void input_mark();
		void display_result();
};
void EXAM :: input_mark(){
	cout << "Entre the marks of Subject  \nSUBJECT 1 marks : " ;
	cin>>mark1;
	cout << "\nSUBJECT 2 mark : ";
	cin>>mark2;
	cout << "\nSUBJECT 3 mark : ";
	cin>>mark3;
 }
 void EXAM :: display_result(){
 	cout << "\t\tMARKS : " << mark1 << " " << mark2 << " " << mark3 << " ";
 	if(mark1 + mark2 + mark3 > 96)
 		cout << "  PASS" << endl;
 	else
 		cout << "  FAIL" << endl;
 	cout << "\n\n";
 }
 void table(){
 	cout<<"NAME\tRoll\tENGLISH\tMATH\tRESULT\n";
 	cout<<""
 }
int main(){
	EXAM E[5];
	for(int i=0; i<5; i++){
		E[i].input_student_detail();
		E[i].input_mark();
	}
	cout << "\tSTUDENT DETAIL\t\t";
	for(int i=0; i<3; i++){
		E[i].display_student_detail();
		E[i].display_result();
	}
	return 0;
}
