#include<bits/stdc++.h>
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long
using namespace std;

class Stack {
public:
    int size;
    int top;
    int *a;
    Stack(int size) {
        top = -1;
        this->size = size;
        a = new int[size];
    }
    void push(int e) {
        if (isFull()) {
            cout << "Stack is Full" << endl;
            return;
        }
        a[++top] = e;
    }
    void pop() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return;
        }
        top--;
    }
    bool isEmpty() {
        if (top == -1) {
            return true;
        }
        return false;
    }
    bool isFull() {
        if (top + 1 == size)return true;
        return false;
    }
    int peek() {
        if (isEmpty())return -1;
        return a[top];
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("C:/Users/samdh/Desktop/c++/input1.txt", "r", stdin);
    freopen("C:/Users/samdh/Desktop/c++/output1.txt", "w", stdout);
#endif






}