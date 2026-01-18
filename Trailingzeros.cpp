#include <bits/stdc++.h>
using namespace std;

long long solve(long long n){
    long long ans=0;
    long long power=5;
    while(true){
        long long val=n/power;
        if(val==0){
            break;
        }else{
            ans+=val;
        }
        
        power=power*5;
    }
    return ans;
}

int main(){
    long long n;
    cin>>n;
    long long ans=solve(n);
    cout<<ans<<endl;
    return 0;
}