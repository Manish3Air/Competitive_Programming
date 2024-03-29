#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    long long N;
    cin>>N;
    vector<long long> ans;
    while (N!=0)
    {
        long long rem=N%10;
        if (rem>4)
        {
            long long desired=9-rem;
            ans.push_back(desired);
        }else{
            ans.push_back(rem);
        }
        N=N/10;
    }
    reverse(ans.begin(),ans.end());
    if(ans[0]==0) ans[0]=9;
    long long sum=0;
    for (long long i = 0; i < ans.size(); i++)
    {
        
        sum=(sum*10)+ans[i];
    }
    cout<<sum;
return 0;
}