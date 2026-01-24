#include <bits/stdc++.h>
using namespace std;

void solve(int n,vector<long long>& vec,long long res,long long& m,int index){
    if(res<0){
        return ;
    }
    
    if(index==n){
        m=min(m,res);
        return ;
    }
    
    res-=vec[index];
    if(res>=0){
        m=min(m,res);
    }
    
    solve(n,vec,res,m,index+1);
    res+=vec[index];
    
    solve(n,vec,res,m,index+1);
    
}

int main(){
    int n;
    cin>>n;
    vector<long long> vec(n);
    long long total=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        total+=vec[i];
    }
    int index=0;
    
    long long res=total/2;
    long long m=LLONG_MAX;
    solve(n,vec,res,m,index);
    long long val=res-m;
    long long ans=total-2*(val);
    cout<<ans<<endl;
    
    
    return 0;
}