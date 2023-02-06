#include<iostream>
using namespace std;



int main()
{
    int a[] = {1,10,23,45,67,899,21,94,56,3};
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0; i < n/2; i++){
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    for(int i=0; i < n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}