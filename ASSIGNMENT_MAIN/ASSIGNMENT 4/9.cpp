#include<iostream>
using namespace std;
class STAFF{
	int code;
	string Name;
	public:
		STAFF(){
			cout << "Enter the Staff Code : "; 		cin>>code;
			cout << "\nEnter the Name of Staff : "; fflush(stdin);	getline(cin,Name);
		}
		void Display(){
			cout << "Name : " << Name << "\nCode : " << code;
		}
};
class Faculty : public STAFF{
	string department,subject_taken,Research_area;
	public:
		Faculty(){
			cout << "\nEnter the Name of Department : "; 		fflush(stdin);	getline(cin,department);
			cout << "Enter the Subject name taken by staff : "; fflush(stdin);	getline(cin,subject_taken);
			cout << "Enter the Faculty Research Area : "; 		fflush(stdin);	getline(cin,Research_area); 
		}
		void Display_F(){
			cout << "\nDepartment : " << department << "\nSubject Taken By Staff : " << subject_taken << "\nResearch Area of Staff : " << Research_area;
		}
};
class Typist : public STAFF{
	string office;
	int speed;
	public:
		Typist(){
			cout << "Enter the Office Name : "; fflush(stdin);	getline(cin,office);
			cout << "Enter the Speed of Typist : "; cin >> speed;
		}
		void Display_T(){
			cout << "\nTypist Office Name : " << office << "\nTypist Speed : " << speed;
		} 
};
class Permanent : public Typist{
	double salary;
	public:
		Permanent(){
			cout << "Enter the Staff Salary : "; cin>>salary;
		}
		void Display_S(){
			cout << "\npermananet staff Salary : " << salary;
		}
};
class Casual : public Typist{
	double daily_wages;
	public :
		Casual(){
			cout << "Enter the Daily_Wages of Casual Staff : "; cin >> daily_wages;
		}
		void Display_Wages(){
			cout << "\nSalary of Casual Staff : " << daily_wages;
		}
};
class officer : public STAFF{
	string Rank,Grade;
	public:
		officer(){
			cout << "Entre the Officer Rank : "; fflush(stdin);	 getline(cin,Rank);
			cout << "Enter the Officer Grade : "; fflush(stdin); getline(cin,Grade);
		}
		void Display_R_G(){
			cout << "\nOfficer Rank : " << Rank << "\nGrade Of officer : " << Grade << endl;
		}
};
int main(){
	Faculty F1;
	F1.Display();
	F1.Display_F();
	Permanent P1;
	P1.Display();
	P1.Display_T();
//	P1.STAFF();
//	P1.Typist();
//	P1.Permanent();

	return 0;
}

