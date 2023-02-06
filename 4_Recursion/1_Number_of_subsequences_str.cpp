#include<iostream>
#include<vector>
using namespace std;

vector<string> subseq(string s1, string s2){
    if(s1.size() == 0){
        vector<string> temp;
        temp.push_back(s2);
        return temp;    
    }


    char ch = s1[0];

    vector<string> left = subseq(s1.substr(1), s2 + ch);
    vector<string> right = subseq(s1.substr(1), s2);

    left.insert(left.end(), right.begin(), right.end());
    return left;


}

int main()
{
    string s = "abc";
    vector<string> ans = subseq(s,"");
    cout<<ans.size()<<endl;
    for(auto i : ans){
        cout<<i<<'\n';
    }
    return 0;
}