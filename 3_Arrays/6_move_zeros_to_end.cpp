// move zeros at the end by keeping order of elements same as earlier.
#include<iostream>
using namespace std;

void printArray(int a[], int n);

void move_zeros_to_end(int a[], int n){
    int count = 0;
    for(int i=0; i < n; i++){
        if(a[i] != 0){
            swap(a[i], a[count++]);
        }
    }
    printArray(a,n);
}

void printArray(int a[], int n){
    for(int i=0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<'\n';
}

int main()
{
    int a[] = {0,10,2,3,4,4,4,5,0,0,0,0,355,3,0,0,0,3,1,1,13,4};
    int n = sizeof(a)/sizeof(a[0]);
    move_zeros_to_end(a,n);
    return 0;
}   