#include <bits/stdc++.h>
using namespace std;


int minsquare(int target ,vector<int>&dp){
    //base case
    if(target==0)return 0;
    if(target<0)return -1;

    if(dp[target]!=-1){
        return dp[target];
    }

    int count=target;

    for(int i=1;i*i<=target;i++){
        count=min(count,1+minsquare(target-i*i,dp));
    }

    return dp[target]=count;


}


int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<minsquare(n,dp)<<endl;

 }
