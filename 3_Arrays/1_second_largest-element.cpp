#include<iostream>
#include<limits.h>
using namespace std;

// int secondLargest(int a[], int n){
//     int max = a[0];
//     for(int i=1; i < n; i++){
//         if(max <= a[i]){
//             max = a[i];
//         }
//     }

//     int secondLargestIndex = 0;
//     int min = max;
//     for(int i=0; i < n; i++){
//         int diff = max - a[i];
//         if(diff == 0) continue;
//         if(min > diff){
//             min = diff;
//             secondLargestIndex = i;
//         }
//     }
//     return a[secondLargestIndex];
// }

int secondLargest(int a[], int n){
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int largest_idx = 0;
    int second_idx = -1;
    for(int i=0; i < n; i++){
        if(largest < a[i]){
            secondLargest = largest;
            largest = a[i];
            second_idx = largest_idx;
            largest_idx = i;
        }
        if(secondLargest < a[i] && a[i] != largest){
            secondLargest = a[i];
            second_idx = i;
        }
       
    }
    return a[second_idx];
}

int main()
{
    int arr[] = {1,10,23,45,67,899,21,94,56};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<secondLargest(arr,n)<<'\n';
    return 0;
}