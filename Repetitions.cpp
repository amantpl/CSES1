#include <bits/stdc++.h>
using namespace std;


long long solve(string s){
    int n=s.size();
    long long cnt=0;
    long long maxi=0;
    
    char ch=s[0];
    for(int i=0;i<n;i++){
        if(ch==s[i]){
            cnt++;
        }else{
            ch=s[i];
            cnt=1;
        }
        maxi=max(maxi,cnt);
    }
    
    return maxi;
}


int main(){
    string st;
    cin>>st;
    long long result=solve(st);
    cout<<result<<endl;
    return 0;
}