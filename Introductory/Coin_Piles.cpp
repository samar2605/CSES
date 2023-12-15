#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isValid(ll one, ll two){
    if(one>two){
        swap(one,two);
    }
    if(two>2*one)
        return false;
    ll sum = one+two;
    if(sum%3!=0){
        return false;
    }else{
        return true;
    }  
    return false;
   }
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        ll one, two;
        cin>>one>>two;
        if(isValid(one,two)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}