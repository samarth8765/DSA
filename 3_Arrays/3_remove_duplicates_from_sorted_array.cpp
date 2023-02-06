#include<iostream>
using namespace std;

int remove_duplicates(int a[], int n){
    int k = 1; 
    for(int i=0; i < n-1; i++){
        if(a[i] != a[i+1]){
            a[k++] = a[i+1];
        }
    }
    return k;
}

int main()
{
    int a[] = {0,0,0,1,1,1,2,2,2,2,2,3,3,3};
    int n = sizeof(a)/sizeof(a[0]);
    int k = remove_duplicates(a,n);
    for(int i=0; i < k; i++){
        cout<<a[i] <<" ";
    }
    cout<<'\n';
    return 0;
}