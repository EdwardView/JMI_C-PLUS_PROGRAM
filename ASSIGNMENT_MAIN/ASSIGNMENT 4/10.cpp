#include<iostream>
using namespace std;
class PROJECT{
	string typ_pro,duration; 
	double amount;
	public:
		void get_P_detail(){
			cout << "Entre the project type : "; fflush(stdin);	getline(cin,typ_pro);
			cout << "Enter the project time duration to complete project : ";	fflush(stdin);	getline(cin,duration);
			cout << "Enter the amount Granted to complete the project : "; cin >> amount;
		}
		void display(){
			cout << "\nProject Type : " << typ_pro << "Total time taken to complete project : "<< duration << "\nAmount Granted to complete project : " << amount << endl;
		}
};
class UNIVERSITY : public PROJECT{
	string name_of_university,department_assign_project,name_of_person_assign_project;
	public:
		void get_U_detail(){
			cout << "Enter the Name of University : ";	fflush(stdin);	getline(cin,name_of_university);
			cout << "Entre the Name of Department who get Poject : "; fflush(stdin);	getline(cin,department_assign_project);
			cout << "Entre the name of person who get project : ";	fflush(stdin);	getline(cin,name_of_person_assign_project);
		}
		void Display_U(){
			cout << "University Name : " << name_of_university << "\nDeaprtment get Project : " << department_assign_project ;
			cout << "\nPerson get project : " << name_of_person_assign_project << endl;
		}
};
class COMPANY : public PROJECT{
	string name_of_company;
	int No_of_eng_assign;
	double amt;
	public:
		void get_C_detail(){
			cout << "Entre the Company Name : ";	fflush(stdin);	getline(cin,name_of_company);
			cout << "Enter the No. of Engineers Assign in the project : ";	fflush(stdin);	cin >> No_of_eng_assign;
			cout << "Enter the amount investedd to do the project : "; cin >> amt;
		}
		void display_C(){
			cout << "Company Name : " << name_of_company << "No. of Engineers Assign to the project : " << No_of_eng_assign << endl;
		}
};
int main(){
	UNIVERSITY U;
	COMPANY C;
	U.get_P_detail();
	U.get_U_detail();
	C.get_C_detail();
	U.display();
	U.Display_U();
	C.display_C();
	return 0;
}
