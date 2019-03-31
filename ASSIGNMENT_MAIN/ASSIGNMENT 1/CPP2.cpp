#include<iostream>
#include<sstream>
using namespace std;
class time
{
	int hrs,min,secs;
	public :
		void input();
		void display();
};
void time :: input()
{
		char ch1 = '\0',ch2 = '\0';
while(1){
		int flag = 1;
		hrs = min = secs = 0;
		ch1 = '\0';
		ch2 = '\0';
		string t;
        cout << "Enter the Time (HH : MM : SS) " << endl;
        cin >> t;
        stringstream sst(t);
        sst>>hrs>>ch1>>min>>ch2>>secs;
        if(sst.fail()){
        	sst.clear();
			cout <<"Invalid time Format. \n";
      			continue;
		}
		if(ch1 != ':' || ch2 != ':'){
			cout << "INVALID TIME\n";
			continue;
		}
		if((int)hrs > 12 || (int)min > 60 || (int)secs>60){
            cout << "Invalid time\n";
        	continue;
        }
		if(flag)
			break;
	}
	
}
void time :: display()
{
	cout  << "Result time  (HH::MM ::SS) is : " << hrs << " : " << min << " : " << secs <<  "\nTime in SECOND " << (hrs*60*60 + min*60 + secs) << endl;
}
int main()
{
	time t1;
	bool i;
	do{
	t1.input();
	t1.display();
	cout<<"to Re-enter Time  press 1 else press 0.\n";
    cin >> i;
	}while(i == 1);	
	return 0;
}
