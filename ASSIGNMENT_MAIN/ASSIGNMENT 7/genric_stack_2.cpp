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
class stack
{
    T *a;
    int length,tos;
    public :
        stack(int n){
            length = n;
            a = new T [n];
            tos = -1;
            }
        bool isEmpty();
        void push (T x);
        T  pop ();
};
template<class T>
bool stack<T>::isEmpty(){
	if(tos==-1)
		return true;
	else
		return false;
}
template<class T>
void stack<T> :: push(T x){
	if(tos == length-1)
		throw ArrayException("Stack is Full.\n");
    a[++tos] = x;
}
template<class T>
T stack<T> :: pop(){
	if(tos == -1)
		throw ArrayException("Stack is Empty.\n");
	return a[tos--];
}
int main(){
	stack<int> s1(10);
	stack<char> s2(10);
	char ch = 'A';
	for(int i=1; i<=10; i++)
		s1.push(i);
	for(int i=1; i<=10; i++)
		s2.push(ch++);
	
	for(int i=0; i<10; i++)
		cout << "Element is pop in stack(int) : " << s1.pop() << endl;
	cout << "\n" << endl;
	for(int i=0; i<10; i++)
		cout << "Element is pop in stack(char) : " << s2.pop() << endl;

	return 0;
}
