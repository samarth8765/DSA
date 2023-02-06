#include<iostream>
using namespace std;

void printArray(int a[], int n);
void reverseArray(int a[], int s, int e);

// void left_rotate_by_1(int a[], int n){
//     int temp = a[0];
//     for(int i=0; i < n; i++){
//         if(i == n-1){
//             a[i] = temp;
//             break;
//         }
//         a[i] = a[i+1];
//     }
// }

// TC->O(n*d) and SC-> O(1) soln
// void left_rotate_by_d(int a[], int n, int d){
//     for(int i=1; i <= d; i++){
//         left_rotate_by_1(a,n);
//     }
// }

// TC->O(n) and SC->O(d) soln
// void left_rotate_by_d(int a[], int n, int d){
//     int temp[n];
//     for(int i=0; i < n-d; i++){
//         temp[i] = a[i+d];
//     }
//     for(int i=n-d; i < n; i++){
//         temp[i] = a[i-n+d];
//     }
//     printArray(temp,n);
// }

// TC->O(n) and SC->O(1) soln
void left_rotate_by_d(int a[], int n ,int d){
        reverseArray(a,0,d);
        reverseArray(a,d,n);
        reverseArray(a,0,n);
        printArray(a,n);
}

void printArray(int a[], int n){
    for(int i=0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<'\n';
}

void reverseArray(int a[], int s, int e){
    for(int i=s; i < (s+e)/2; i++){
        swap(a[i], a[s+e-i-1]);
    }
}

int main()
{
    int a[] = {1,10,23,45,67,899,21,94,56,3};
    int n = sizeof(a)/sizeof(a[0]);
    int d = 5;
    left_rotate_by_d(a,n,d);
    return 0;
}