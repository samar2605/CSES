#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    string str;
    cin>>str;

    unordered_map<char,int> mp;
    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }
    int count =0;
    for(auto m:mp){
        if(m.second&1){
            count++;
        }
    }
    if(count>1){
        cout<<"NO SOLUTION\n";
    }else{
        char ch;
        string s="";
        for(auto m:mp){
            if(m.second&1){
                ch=m.first;
            }
            for(int i=1;i<=m.second/2;i++){
                s+=m.first;
            }
        }
        string temp=s;
        reverse(s.begin(),s.end());
        if(count==1)
            s=s+ch+temp;
        else
            s+=temp;
        cout<<s<<endl;
    }
    return 0;
}