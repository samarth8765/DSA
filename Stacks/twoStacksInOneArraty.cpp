#include<bits/stdc++.h>
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long
using namespace std;

class twoStacks {


public:
	int *arr;
	int top1;
	int top2;
	int size;
	twoStacks(int n) {
		size = n;
		arr = new int [n];
		top1 = -1;
		top2 = n ;
	}

	void push1(int x) {
		if (top1 <= size && top1 < top2 - 1) {
			arr[++top1] = x;
		} else {
			cout << "Stack 1 is full" << endl;
		}
	}
	void push2(int x) {
		if (top2 >= 0 && top1 < top2 - 1) {
			arr[--top2] = x;
		} else {
			cout << "Stack 2 is full" << endl;
		}
	}

	void pop1() {
		if (top1 == -1) {
			cout << "Stack underflow" << endl;
			return;
		}
		top1--;
	}

	void pop2() {
		if (top2 == size) {
			cout << "Stack underflow" << endl;
			return;
		}
		top2++;
	}
	int top1_() {
		if (top1 == -1) {
			cout << "Stack is Empty" << endl;
			return -1;
		}
		return arr[top1];
	}
	int top2_() {
		if (top2 == size) {
			cout << "Stack is Empty" << endl;
			return -1;
		}
		return arr[top2];
	}


};

int main() {

	twoStacks st(10);
	st.push1(1);
	st.push1(2);
	st.push1(3);
	st.push1(4);
	st.push2(10);
	st.push2(9);
	st.push2(8);
	st.push2(7);
	st.push2(6);
	st.push2(5);
	st.pop1();
	st.pop2();
	st.pop1();
	st.pop2();
	st.pop1();
	st.pop2();
	st.pop1();
	st.pop2();
	st.pop2();
	st.pop2();
	cout << st.top1_() << endl;
	cout << st.top1 << endl;
	cout << st.top2 << endl;
	cout << st.top2_();


}