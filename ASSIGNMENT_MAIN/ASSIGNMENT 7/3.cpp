#include<iostream>
using namespace std;
template <class T>
class SORT{
	T *a,n;
	public:
		SORT(int n){
			a = new T[n];
			this->n = n;
			cout << "Input values " << endl;
			for(int i=0; i<n; i++)
				cin >> a[i];
		}
		void insertionsort();
		void display();
};
template <class T>
void SORT<T> :: insertionsort(){
	for(int i=1; i<n; i++){
		T temp = a[i];
		int j = i-1;
		while(j>=0 and a[j] > temp){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
}
template <class T>
void SORT<T> :: display(){
	for(int i=0; i<n; i++)
		cout << a[i] << "\t";
}
int main(){
	int n;
	cout << "Entre the Number of Element : "; cin >> n;
	SORT<int> S(n);
	cout << "\nBefore Sorting\n";
	S.display();
	S.insertionsort();
	cout << "\nAfter Sorting\n";
	S.display();
	
	cout << "Entre the Number of Element : "; cin >> n;
	SORT<char> S1(n);
	cout << "\nBefore Sorting\n";
	S1.display();
	S1.insertionsort();
	cout << "\nAfter Sorting\n";
	S1.display();
	
	return 0;	
}
