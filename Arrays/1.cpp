#include<bits/stdc++.h>
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long
using namespace std;
bool isPalindrome(string s) {
	int size = s.size() - 1;
	for (int i = 0; i < size; i++) {
		if (s[i] != s[size  - i]) {
			return false;
		}
	}
	return true;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("C:/Users/samdh/Desktop/c++/input1.txt", "r", stdin);
	freopen("C:/Users/samdh/Desktop/c++/output1.txt", "w", stdout);
#endif
	cout << isPalindrome("aba") << endl;


}