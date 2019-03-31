#include<iostream>
#include<sstream>
#include<iomanip>
#include<regex>
#include<cctype>
using namespace std;
class student{
    string name;
    int rollNO;
    float mark1,mark2,mark3,total,average;
    public :
            void getdata();
            void displaydata();
};
void student :: getdata(){
    cout << "Enter the Student Detail \n";
    
    while(1){
    	cout << "Enter Student name : \n";
		fflush(stdin); 
		name = "";
    	getline(cin,name);
		regex reg("[a-z]{3,20}[ ]{0,1}[a-z]{0,20}[ ]{0,1}[a-z]{0,20}");
		if(regex_match(name,reg)){
			break;
		}else{
			cout << "Invalid User Name.\n";
			continue;
		}
	}
   	while(1){
		cout << "Student RollNumber(should be in Integer) : ";
		cin >> rollNO;
		if(rollNO < 0){
			cout << "Invalid Roll Number.\n";
			continue;
		}
		else
			break;
	}
	while(1){		
		cout << "Enter the marks 1 : " ; 
		cin >> mark1;
		if(mark1 > 101 or mark1 < 0){
			cout << "Inavlid Mark1 \n";;
			continue;
		}
		else
			break;
	}
	 while(1){		
		cout << "Enter the marks 2 : " ; cin >> mark2;
		if(mark2 > 101 or mark2 < -1){
			cout << "Inavlid Mark2 \n";;
			continue;
		}
		else
			break;
	}
	 while(1){		
		cout << "Enter the marks 3 : " ; cin >> mark3;
		if(mark1 > 101 or mark3 < -1){
			cout << "Inavlid Mark 3 \n";;
			continue;
		}
		else
			break;
	}
}
void student :: displaydata(){
	cout << setw(30) << "--STUDENT DETAIL--" << endl;
	cout << setw(30) << "NAME : " <<name << endl;
	cout << setw(30) << "ROLL NUMBER : " << rollNO << endl;
	cout << setw(30) << "MARKS [ " << mark1 << "," << mark2 << "," << mark3 << "]" << endl;
	cout << setw(30) << "Total Marks : " << (mark1+mark2+mark3) << endl;
	cout << setw(30) << "Average Mark : " << (mark1+mark2+mark3)/3 << endl;
}
int main(){
	student S[2];
	for(int i=0; i<2; i++)
		S[i].getdata();
	for(int i=0; i<2; i++)
		S[i].displaydata();
	
	return 0;
}
