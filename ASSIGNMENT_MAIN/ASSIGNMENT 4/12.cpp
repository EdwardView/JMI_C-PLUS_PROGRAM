#include<iostream>
using namespace std;
class Student{
	protected:
	string name;
	int roll_num;
	public:
		void virtual get_detail(){
			cout << "Enter the name of student :";	fflush(stdin);	getline(cin,name);
			cout << "Entre the roll number of student : "; cin >> roll_num;
		}
		void virtual display_detail(){
			cout << "Name : " << name;
			cout << "\nRoll Number : " << roll_num << endl;
		}
};
class Examination: virtual public Student{
	protected:
	float test1,test2,avg;
	public:
		void test_mark(){
			cout << "Enter the marks of test\nTest 1 : "; cin >> test1;
			cout << "Test 2 : ";	cin >> test2;
		}
		void call_average(){
			avg =  (test1+test2)/2;
		}
		void display_average(){
			cout << "Avergae : " << avg << endl;
		}
};
class Extracurricular : virtual public Student{
	protected:
	float paint,mus;
	public:
		void get_score(){
			cout << "Entre the Painting Score : "; cin >> paint;
			cout << "Entre the Music Score : "; cin>>mus;
		}
		void display_total(){
			cout << "Painting Score : " << paint << "\nMusic Score : " << mus << endl;
		}		
};
class Result:public Extracurricular,public Examination{
	protected:
		float total;
	public:
		void cal_total(){
			total = test1+test2+paint+mus;
		}
		void comment(){
			if(total > 4*33)
				cout << "PASS";
			else
				cout << "FAIL";
		}
};
int main(){
//	Student *S;
//	Examination *S;
	Result r;
	//S = &r;
//	S->get_detail();
	r.get_detail();
	r.test_mark();
	r.get_score();
	r.cal_total();
	r.call_average();
//	S->display_detail();
	r.display_detail();
	r.display_average();
	r.display_total();
	r.comment();
	return 0;
}

