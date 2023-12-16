#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        ll k;
        cin>>k;

        ll num=0,cur=1, digit=0;
        while(k>num){
            digit++;
            num+= digit*9*cur;
            cur = cur*10;
        }

        num-=digit*9*(cur/10);
        
        ll reset = k-num, rem,last=0;
        for(ll i=0;i<digit-1;i++){
            last = last*10+9;
        }
        rem = reset%digit;
        
        if(rem==0){
            reset = reset/digit;
            ll number = last+reset;
            cout<<number%10<<endl;
        }else{
            reset =reset/digit +1;
            ll number = last+reset;

            vector<ll> digits(digit);
            for(ll i=digit;i>0;i--){
                digits[i-1] = number%10;
                number/=10;
            }
            cout<<digits[rem-1]<<endl;
        }
    }

    return 0;
}