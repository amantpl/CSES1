#include <bits/stdc++.h>
using namespace std;

long long solve(int num){
    long long total=(long long)num*num*(num*num-1)/2;
    long long attacked=(long long)4*((num-1)*(num-2));
    long long ans=total-attacked;
    return ans;
}


int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        long long ans=solve(i);
        cout<<ans<<endl;
    }
    return 0;
}