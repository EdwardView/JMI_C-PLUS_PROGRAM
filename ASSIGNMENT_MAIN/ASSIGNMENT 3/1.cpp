#include<iostream>
using namespace std;
class even_odd{
	int n;
	public:
		even_odd(){
			cout << "Enter the Number :\n";
			cin >> n;
		}
		void operator ! ();
		void operator --();
};
void even_odd :: operator !(){
	if(n%2)
		cout << "Number is ODD\n";
	else
		cout << "Number is EVEN\n";
} 
void even_odd :: operator --(){
	int flag=1;
	for(int i=2; i<=n/2; i++){
		if(n%i == 0){
			flag = 0;
			break;
		}
	}
	if(flag == 1)
		cout << "Number is prime.\n";
	else
		cout << "Number is Not prime.\n";
}
int main(){
	int temp;
	do{
		even_odd eo;
		!eo;
		--eo;
		cout << "To continue press 1.\n else press any key.\n";
		cin >> temp;
	}while(temp == 1);
	return 0;
}
