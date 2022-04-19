#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long
vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3){
    vector<int> ans;
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n1 && j < n2 && k < n3){
        if(A[i] == B[j] && B[j] == C[k]){
            ans.push_back(A[i]);
            i++;j++;k++;
        }
        else if(A[i] < B[j]){
            i++;
        }
        else if(B[j] < C[k]){
            j++;
        }
        else{
            k++;
        }
        int p1 = A[i-1];
        while(p1 == A[i]) i++;

        int p2 = B[j-1];
        while(p2 == B[j]) j++;

        int p3 = C[k-1];
        while(p3 == C[k]) k++;
    }
    if(ans.size() == 0) return {-1};
    return ans;
}

int main(){
    int a[] = {1, 5, 10, 20, 40, 80}; 
    int b[] = {6, 7, 20, 80, 100};
    int c[] = {3, 4, 15, 20, 30, 70, 80, 120}; 

    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    int n3 = sizeof(c)/sizeof(c[0]);

    vector<int> ans = commonElements(a,b,c,n1,n2,n3);
    for(auto it: ans){
        cout<<it<<" ";
    }
return 0;
}