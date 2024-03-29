#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        string s1;
        int N=s.size();
        if (N<=10)
        {
            cout<<s<<endl;
        }
        else{
            s1=s[0]+to_string(N-2)+s[N-1];
            cout<<s1<<endl;
        }
    }
    
return 0;
}