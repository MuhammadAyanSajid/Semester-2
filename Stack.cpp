#include<iostream>

using namespace std;
template<class T>
class Stack {
	T* arr;
	int size, top;
public:
	Stack(int s):size(s),top(0) {
		arr = new T[size];
	}
	void push(T val) {
		if (top == size) {
			cout << "Stack Overflow" << endl;
			return;
		}
		arr[top++] = val;
	}
	T pop() {
		if (top == 0) {
			cout << "Stack Underflow" << endl;
			return -1; 
		}
		return arr[--top];
	}
};
int main() {
	Stack<int> s(5);
	s.push(10);
	s.push(20);
	cout << s.pop() << endl; 
	cout << s.pop() << endl; 
	cout << s.pop() << endl;
	return 0;
}