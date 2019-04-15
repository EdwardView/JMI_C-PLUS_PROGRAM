#include<iostream>
using namespace std;
class USER{
	protected:
		string name;
		int age;
	public:
		USER(string str,int a){	name = str;	age = a; }
};

class STUDENT : public USER{
	int roll_num,mark1,mark2,mark3;
	string course;
	public:
		STUDENT(string sn,int sage) : USER(sn,sage){
			cout << "Entre the student course name : "; cin>>course;
			cout << "Entre the student roll number : " ; cin>>roll_num;
			cout << "Entre the marks of Subject  \nSUBJECT 1 marks : " ;
			cin>>mark1;
			cout << "\nSUBJECT 2 mark : ";
			cin>>mark2;
			cout << "\nSUBJECT 3 mark : ";
			cin>>mark3;
		}
		void display();
};
void STUDENT :: display(){
	cout << "STDUENT \nName : " << name << "\nROll Number : " << roll_num << "\nAGE : " << age << "\nCOURSE : " << course << "\nMARKS :\t" << mark1 << " " << mark2 << " " << mark3 << endl;
 }
class TEACHER : public USER{
	string subject_assign[3],contact_hour;
	public:
		TEACHER(string tn,int tage) : USER(tn,tage){
			cout << "Entre the Subject assigned to teacher : \n";
			for(int i=0;i<3; i++){ 
				cout << "Entre subject " << i+1 << " ";
				cin >> subject_assign[i];
			}
			cout << "Entre the Teacher Contact hour : ";	cin >> contact_hour;
		}
		void display(){
			cout << "Teacher Detail\n NAME : " << name << "\nAGE : " << age << "\nCONTACT HOUR : " << contact_hour;
			cout << "\nSUBJECT ASSIGNED BY TEACHER \n";
			for(int i=0;i<3; i++){ 
				cout << subject_assign[i] << "\t" ;
			}	
		}
};
int main(){
	int i,ch;
	do{
		
		cout << "Login Type :  1.STUDENT \t2.TEACHER.\n";
		cin >> i;
		switch(i){
			case 1:{
				string str;
				int age;
				cout << "Entre the Sudent Name : "; getline(cin,str); cout << "\nEnter the age of student : "; cin >> age;
				STUDENT s(str,age);
				s.display();
				break;
			}
			case 2:{
				string str;
				int age;
				cout << "Entre the teacher Name : "; fflush(stdin); getline(cin,str); cout << "\nEnter the age of teacher : "; cin >> age;
				TEACHER T(str,age);
				T.display();
				break;
			}
			default :
					cout << "Ivalid option.\n";
					break;
		}
		cout << "To continue press 1 \n To exit press 0.\n";  
		cin >> ch;
	}while(ch != 0);
}
