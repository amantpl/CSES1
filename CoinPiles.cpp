#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        
        long long sum=x+y;
        if(sum%3==0 && x<=2*y && y<=2*x){
            cout<<"YES"<<endl;
        }else{

                cout<<"NO"<<endl;
            
            
        }
    }
    return 0;
}