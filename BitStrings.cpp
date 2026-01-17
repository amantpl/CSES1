#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int power(int num,int n){
    if(n==0){
        return 1;
    }
    long long result=power(num,n/2);
    if(n%2==0){
        result=(result*result)%MOD;
    }else{
        result=(result*result)%MOD;
        result=(result*num)%MOD;
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    int ans=power(2,n);
    cout<<ans<<endl;
    return 0;
}