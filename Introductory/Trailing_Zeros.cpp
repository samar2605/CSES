#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll t;
    cin>>t;

    ll count =0,num=5;
    while(t/num){
        count+=t/num;
        num*=5;
    }
    cout<<count<<endl;
    return 0;
}