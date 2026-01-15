#include <bits/stdc++.h>
using namespace std;


long long solve(long long row,long long col){
    if(row>=col && row%2!=0){
        return (long long)(row-1)*(row-1)+col;
    }else if(row>=col && row%2==0){
        return (long long)(row*row)-(col-1);
    }else if(col>=row && col%2==0){
        return (long long)(col-1)*(col-1)+row;
    }else if(col>=row && col%2!=0){
        return (long long)(col*col)-(row-1);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long ans=solve(x,y);
        cout<<ans<<endl;
    }

    
    
    return 0;
}