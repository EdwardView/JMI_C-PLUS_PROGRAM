#include<iostream>
#include<iomanip>
using namespace std;
class Student{
	protected:
	string name;
	int roll_num,age;
	public:
		virtual void get_detail() = 0;
		virtual void display_detail() = 0;
};
class Engineering : public Student {
	public:
		void get_detail(){
			cout << "Enter the name of student :";	fflush(stdin);	getline(cin,name);
			cout << "Entre the roll number of student : "; cin >> roll_num;
			cout << "Entre the age of student : "; cin >> age;
		}
		void display_detail(){
			cout << setw(20) <<"I'm Engineering Student.\n";
			cout << setw(20) <<"Name : " << name << endl;
			cout << setw(20) << "Roll Number : " << roll_num << endl;
			cout << setw(20) << "AGE : " << age << endl;
		}
};
class Medicine : public Student {
	public:
		void get_detail(){
			cout << "Enter the name of student :";	fflush(stdin);	getline(cin,name);
			cout << "Entre the roll number of student : "; cin >> roll_num;
			cout << "Entre the age of student : "; cin >> age;
		}
		void display_detail(){
			cout << setw(20) <<"I'm Medical Student.\n";
			cout << setw(20) <<"Name : " << name << endl;
			cout << setw(20) <<"Roll Number : " << roll_num << endl;
			cout << setw(20) <<"AGE : " << age << endl;
		}
};
class Science : public Student {
	public:
		void get_detail(){
			cout << "Enter the name of student :";	fflush(stdin);	getline(cin,name);
			cout << "Entre the roll number of student : "; cin >> roll_num;
			cout << "Entre the age of student : "; cin >> age;
		}
		void display_detail(){
			cout << setw(20) <<"I'm Science Student.\n";
			cout << setw(20) <<"Name : " << name << endl;
			cout << setw(20) <<"Roll Number : " << roll_num << endl;
			cout << setw(20) <<"AGE : " << age << endl;
		}
};

int main(){
	Student *St[3];
	St[0] = new Engineering;
	St[1] = new Medicine;
	St[2] = new Science;
	for(int i=0; i<3; i++){
		St[i]->get_detail();
	}
	for(int i=0; i<3; i++){
		St[i]->display_detail();
	}
	return 0; 
}
