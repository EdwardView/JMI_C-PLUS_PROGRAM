#include<iostream>
using namespace std;
/*class largest
{
	int n1,n2,n3;
	public :
		largest()
		{
			cout << "Entre the three Number : \n";
			cin >> n1 >> n2 >> n3;
		}
		inline void largest_of_three ();
		void display();
};*/

inline void largest_of_three(int n1,int n2,int n3)
{
	(n1>n2) ? ((n1>n3) ? (cout << "Largest is 1st \t" << n1) :( cout << "Largest is 3rd \t"<<n3)) : ((n2>n3) ? (cout << "Largest is 2nd \t" << n2) : (cout << "Largest is 3rd \t " << n3));
	cout << endl;
}

/*void largest :: display()
{
	cout << "Three Number are : \t " << n1 << " " << n2 << " " << n3 << endl;
}*/
int main()
{
    char ch;
    do{
        //largest l1;
        //l1.display();
        cout << "Enter the three Number : \n"; int n1,n2,n3;
        cin >> n1 >> n2 >> n3;
        largest_of_three(n1,n2,n3);
        cout << "to continue Press Y otherwise Press ny key.\n"; getchar();
        cin >> ch;
    }while(ch == 'Y' || ch == 'y');
	return 0;
}
