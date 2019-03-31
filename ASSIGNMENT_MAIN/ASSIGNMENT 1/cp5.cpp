#include<iostream>
#include<sstream>
using namespace std;
class time
{
	int hrs,min;
	public :
		void input();
		void gettime(int,int);
		void sum(time &,time &);
		void display();
};
void time :: input()
{
		char ch = '\0';
while(1){
	//	int flag=1;
		hrs = min = 0;
		ch = '\0';
		string t;
        cout << "Enter the Time (HH : MM : SS) " << endl;
        cin >> t;
        stringstream sst(t);
        sst>>hrs>>ch>>min;
//     	display();
        if(sst.fail()){
			cout <<"Invalid time Format. \n";
			continue;
		}
		if(ch != ':'){
        	cout <<"Invalid Time Format. \n";
        	continue;
		}
        
		if((int)hrs > 12 || (int)min > 60){
            cout << "Invalid time\n";
        	continue;
        }	
		if(flag == 1)
			break;
	}
}
void time :: sum(time &t1,time &t2)
{
	min = t1.min + t2.min;
	hrs = t1.hrs + t2.hrs + (min/60);
	min = min%60;
}
void time :: display()
{
	cout  << "Result time (HH::MM) is : " << hrs << " : " <<
    min << endl;
}
int main()
{
	time t1,t2,t3;
	bool i=0;
	do{
	t1.input();
	t2.input();
	t3.sum(t1,t2);
	t3.display();
	cout<<"to continue press 1 else press 0.\n";
    cin >> i;
	}while(i == 1);	
	return 0;
}
