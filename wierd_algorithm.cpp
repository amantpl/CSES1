#include <bits/stdc++.h>
using namespace std;

vector<long long> solve(long long n){
    vector<long long> ans;
    ans.push_back(n);
    while(n!=1){
        if(n%2==0){
            n=n/2;
            ans.push_back(n);
        }else{
            n=n*3+1;
            ans.push_back(n);
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<long long> result=solve(n);
    
    for(long long x:result){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}