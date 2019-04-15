#include<iostream>
#include<cstring>
using namespace std;
class ArrayException
{
	char *s;
	public :
		ArrayException(char *x)
		{
			s = new char[strlen(x)+1];
			strcpy(s,x);
			cout << s << endl;
			exit(1);
		}
		friend ostream &operator>>(ostream &abc,ArrayException a)
		{
			abc << a.s;
			return abc;
		}
};
template <class T>
class Queue{
	T *a;
	int rear,front,length;
	public:
		Queue(int n){
			a = new T[n];
			length = n;
			front = rear = -1;
		}
		bool isEmpty();
		void insert(T x);
		T del();
		void display();
		T getrear();
		T getfront();
};
template <class T>
bool Queue<T> :: isEmpty(){
	if(rear == -1)
		return true;
	else
		return false;
}
template <class T>
void Queue<T> :: insert(T x){
	if(rear == length-1)
		throw ArrayException("Queue is Full.\n");
		
	if(rear == -1)
		front = rear = 0;
	else
		rear++;
	a[rear] = x;	
}
template <class T>
T Queue<T> :: del(){
	if(front == -1){
		throw ArrayException("Queue Empty.\n");
	}
	T x = a[front];
	if(rear == front)
		rear = front = -1;
	else
		front++;		
	return x;
}
template <class T>
void Queue<T> :: display(){
	for(int i=front; i<=rear; i++){
		cout << a[i] << "\t" ;
	}
}
template <class T>
T Queue<T> :: getfront(){
	if(isEmpty() == false)
		return a[front];
	else 
		throw ArrayException("Queue is Empty\n");
}
template <class T>
T Queue<T> :: getrear(){
	if(isEmpty() == false){
		return a[rear];
	}
	else
		throw ArrayException("Queue is Empty\n");
}
int main(){
	
	Queue<int> q1(5);
	Queue<char> q2(5);
		
//	for(int i=0; i<5; i++)
//		q1.insert(i+1);
	char ch = 'A';
	for(int i=0; i<5; i++)
		q2.insert(ch++);
//			
//	cout << "Front of Queue(int) : " << q1.getfront() << endl;
////	cout << "Rear of Queue(int) : " << q1.getrear() << endl;
//		
//	for(int i=0; i<5; i++){
//		q1.display();
//		cout << "\nDelete in Queue(int) : " << q1.del() << endl;
//	}
	
	cout << "\n\nFront of Queue(char) : " << q2.getfront() << endl;
	cout << "Rear of Queue(char) : " << q2.getrear() << endl;
	for(int i=0; i<5; i++){
		q2.display();
		cout << "\nDelete in Queue(char) : " << q2.del() << endl;
	}
	
	return 0;
}
