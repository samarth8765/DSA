#include<bits/stdc++.h>
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("C:/Users/samdh/Desktop/c++/input1.txt", "r", stdin);
	freopen("C:/Users/samdh/Desktop/c++/output1.txt", "w", stdout);
#endif

	stack<char>st;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		st.push(s[i]);
	}
	s = "";
	while (!st.empty()) {
		s.push_back(st.top());
		st.pop();
	}
	cout << s;


}