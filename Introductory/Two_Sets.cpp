#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll t;
    cin>>t;

    ll sum = t*(t+1)/2;
    if(sum%2!=0){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
        vector<int> set1, set2;
        ll n=t;
        while(n>=4){
            set1.push_back(n);
            set2.push_back(n-1);
            set2.push_back(n-2);
            set1.push_back(n-3);
            n-=4;
        }
        if(n==3){
            set1.push_back(3);
            set2.push_back(2);
            set2.push_back(1);
        }
        else if(n==2){
            set1.push_back(1);
            set2.push_back(2);
        }else if(n==1){
            set2.push_back(1);
        }
        cout<<set1.size()<<endl;
        for(auto s:set1){
            cout<<s<<" ";
        }
        cout<<endl;
        cout<<set2.size()<<endl;
        for(auto s:set2){
            cout<<s<<" ";
        }
    }

    return 0;
}