#include <bits/stdc++.h>
using namespace std;

int main(){
    string st;
    cin>>st;
    map<char,long long> mp;
    for(int i=0;i<st.size();i++){
        mp[st[i]]++;
    }
    long long cnt=0;
    char ch;
    int count=0;
    for(auto it:mp){
        if(it.second%2!=0){
            cnt++;
            ch=it.first;
            count=it.second;
        }
    }
    
    if(cnt>1){
        cout<<"NO SOLUTION"<<endl;
    }else{
        string ans="";
        for(auto it:mp){
            if(it.second%2==0){
                for(int i=0;i<it.second/2;i++){
                    ans+=it.first;
                }
            }
        }
        
   
            string rev=ans;
            reverse(rev.begin(),rev.end());
            string chr(count,ch);
            ans+=chr;
            ans+=rev;
            cout<<ans<<endl;
        
    }
    
    
    return 0;
}