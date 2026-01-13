#include <bits/stdc++.h>
using namespace std;

vector<long long> solve(long long n){
    vector<long long> res;

    
    for(int i=1;i<=n;i++){
        if(i%2==0){
            res.push_back(i);
        }
    }
    
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            res.push_back(i);
        }
    }
    
    return res;
}

int main(){
    
    long long n;
    cin>>n;
    
    if(n<=3 && n!=1){
        cout<<"NO SOLUTION"<<endl;
    }else{
            vector<long long> result=solve(n);
    
    for(int x:result){
        cout<<x<<" ";
    }
    
    cout<<endl;
    }
    

    
    return 0;
}