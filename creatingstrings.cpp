#include <bits/stdc++.h>
using namespace std;

void solve(string& s,string& res,set<string>& vec,vector<bool>& flag){
    if(res.size()==s.size()){
        vec.insert(res);
        return ;
    }
    
    for(int i=0;i<s.size();i++){
        if(flag[i]==1){
            continue;
        }else{
            res+=s[i];
            flag[i]=true;
            solve(s,res,vec,flag);
            res.pop_back();
            flag[i]=false;
        }
    }
}

int main(){
    string s;
    cin>>s;
    set<string> vec;
    
    int n=s.size();
    vector<bool> flag(n,false);
    string res="";
    solve(s,res,vec,flag);
    cout<<vec.size()<<endl;
    for(auto it:vec){
        cout<<it<<endl;
    }
    return 0;
}