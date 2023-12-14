#include<bits/stdc++.h>
using namespace std;

#define ll long long

void permute(string s, int index, set<string>& res){

    if(index>s.length()||index<0)
        return;

    if(index == s.length()){
        res.insert(s);
    }

    for(int i=index;i<s.length();i++){
        swap(s[i],s[index]);
        permute(s,index+1,res);
        swap(s[i],s[index]);
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    string s;
    cin>>s;
    set<string> res;
    permute(s,0,res);
    cout<<res.size()<<endl;

    for(auto str:res){
        cout<<str<<endl;
    }
    return 0;
}