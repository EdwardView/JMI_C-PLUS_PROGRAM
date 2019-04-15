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

class stack
{
    int *a;
    int length,tos;
    public :
        stack(int n){
            length = n;
            a = new int [n];
            tos = -1;
            }
        bool isEmpty();
        void push (int x);
        int  pop ();
};
bool stack::isEmpty(){
	if(tos==-1)
		return true;
	else
		return false;
}
void stack :: push(int x){
	if(tos == length-1)
		throw ArrayException("Stack is Full.\n");
    a[++tos] = x;
}
int  stack :: pop(){
	if(tos == -1)
		throw ArrayException("Stack is Empty.\n");
	return a[tos--];
}
int main(){
	stack s1(10);
	for(int i=1; i<=10; i++)
		s1.push(i);
	
	for(int i=0; i<=10; i++)
		cout << "Element is pop in stack : " << s1.pop() << endl;
	return 0;
}
