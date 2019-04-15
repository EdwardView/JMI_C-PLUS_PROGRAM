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

class Queue{
	int *a,rear,front,length;
	public:
		Queue(int n){
			a = new int[n];
			length = n;
			front = rear = -1;
		}
		bool isEmpty();
		void insert(int x);
		int del();
		void display();
		int getrear();
		int getfront();
};
bool Queue :: isEmpty(){
	if(rear == -1)
		return true;
	else
		return false;
}
void Queue :: insert(int x){
	if(rear == length-1)
		throw ArrayException("Queue is Full.\n");
		
	if(rear == -1)
		front = rear = 0;
	else
		rear++;
	a[rear] = x;	
}
int Queue :: del(){
	if(front == -1){
		throw ArrayException("Queue Empty.\n");
	}
	int x = a[front];
	if(rear == front)
		rear = front = -1;
	else
		front++;		
	return x;
}

void Queue :: display(){
	for(int i=front; i<=rear; i++){
		cout << a[i] << "\t" ;
	}
}
int Queue :: getfront(){
	if(isEmpty() == false)
		return a[front];
	else 
		throw ArrayException("Queue is Empty\n");
}
int Queue :: getrear(){
	if(isEmpty() == false){
		return a[rear];
	}
	else
		throw ArrayException("Queue is Empty\n");
}
int main(){
	
	Queue q1(5);
		
	for(int i=0; i<5; i++)
		q1.insert(i+1);
		
	cout << "Front of Queue : " << q1.getfront() << endl;
	cout << "Rear of Queue : " << q1.getrear() << endl;
		
//	q1.display();
	for(int i=0; i<5; i++){
		q1.display();
		cout << "\nDelete in Queue : " << q1.del() << endl;
	}
//	cout << "Front of Queue : " << q1.getfront() << endl;
//	cout << "Rear of Queue : " << q1.getrear() << endl;
	
	return 0;
}
