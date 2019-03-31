#include<iostream>
#include<sstream>
using namespace std;
//class Civil_Time;
class Railway_Time;
class Civil_Time{
	int hrs,min;
	string str;
	public:
		Civil_Time(){}
		void show();
	    void operator=(Railway_Time &);
};
class Railway_Time{
	int hrs,min;
	public:
		void input();
		void display();
		friend void Civil_Time :: operator=(Railway_Time &);
};
void Railway_Time :: input()
{
	char ch1 = '\0';
	while(1){
		hrs = min = 0;
		ch1 = '\0';
		string t;
     	cout << "Enter the Time (HH : MM) " << endl;
       	cin >> t;
       	stringstream sst(t);
        sst>>hrs>>ch1>>min;
        if(sst.fail()){
        	sst.clear();
			cout <<"Invalid time Format. \n";
   			continue;
		}
		if(ch1 != ':'){
			cout << "INVALID TIME\n";
   			continue;

		}
		if((int)hrs > 24 || (int)min > 60){
            cout << "Invalid time\n";
           	continue;
        }
        break;
	}
}
void Railway_Time :: display()
{
	cout  << "Time in Railway Format(24 hours Format)(HH::MM) is : " << hrs << " : " << min << endl;
}
//class Civil_Time{
//	int hrs,min;
//	char ch[2];
//	public:
//		Civil_Time(){}
//		void show();
//	    void operator=(Railway_Time &);
//};
void Civil_Time :: show()
{
	cout  << "Time in Railway Format(24 hours Format)(HH::MM) is : " << hrs << " : " << min << " " << str << endl;
}

void Civil_Time :: operator=(Railway_Time &R){
	if(R.hrs > 12){
		hrs = R.hrs%12;
		min = R.min;
		str = "PM";
	}else{
		hrs = R.hrs;
		min = R.min;
		str = "AM";
	}
}
int main(){
	int temp;
	do{
		Railway_Time R;
		R.input();
		R.display();
		Civil_Time C;
		C = R;
		C.show();
		cout << "To continue press 1.\n else press any key.\n";
		cin >> temp;
	}while(temp == 1);
	
	return 0;
}
