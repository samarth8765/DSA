#include<iostream>
using namespace std;

void left_rotate_by_1(int a[], int n){
    int temp = a[0];
    for(int i=0; i < n; i++){
        if(i == n-1){
            a[i] = temp;
            break;
        }
        a[i] = a[i+1];
    }
}

void printArray(int a[], int n){
    for(int i=0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<'\n';
}

int main()
{
    int a[] = {1,10,23,45,67,899,21,94,56,3};
    int n = sizeof(a)/sizeof(a[0]);
    left_rotate_by_1(a,n);
    printArray(a,n);
    return 0;
}