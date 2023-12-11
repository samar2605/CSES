#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    string s;
    cin>>s;

    int count=1,longest=1;

    for(int i=1;i<s.length();i++){
        while(s[i]==s[i-1] && i<s.length()){
            count++;
            i++;
        }
        longest=max(count,longest);
        count=1;
    }

    cout<<longest<<endl;

    return 0;
}