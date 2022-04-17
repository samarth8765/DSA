// Move all negative numbers to beginning and positive to end with constant extra space
#include<iostream>
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("C:/Users/samdh/Desktop/c++/input1.txt", "r", stdin);
// 	freopen("C:/Users/samdh/Desktop/c++/output1.txt", "w", stdout);
// #endif


	int a[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6
	          };
	int n = sizeof(a) / sizeof(a[0]);


	int i = 0;
	int j = n - 1;

	while (j >= i) {
		while (a[i] < 0) i++;
		while (a[j] > 0) j--;
		if (i >= j) break;
		swap(a[i], a[j]);


		cout << i << " " << j << endl;
		fo(i, n) cout << a[i] << " ";
		cout << "\n";
	}
	fo(i, n) cout << a[i] << " ";

}