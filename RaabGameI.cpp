#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if((a==0 && b!=0) || (a!=0 && b==0)){
            cout<<"NO"<<endl;
        }else if((long long)a+b>(long long)n){
            cout<<"NO"<<endl;
        }else{
            vector<int> vecA;
            vector<int> vecB;
            for(int i=1;i<=n;i++){
                vecA.push_back(i);
                vecB.push_back(i);
            }
            
            vector<int> ansA;
            vector<int> ansB;
            
            int i=0;
            int j=0;
            int k=n-1;
            int l=n-1;
            
            long long wins=a+b;
            long long ties=n-(a+b);
            
            while(ties--){
                ansA.push_back(vecA[i]);
                ansB.push_back(vecB[j]);
                i++;
                j++;
            }
            
            int A=a;
            int B=b;
            if(a<=b){
                while(A--){
                ansA.push_back(vecA[k]);
                ansB.push_back(vecB[j]);
                k--;
                j++;
            }
            
            while(B--){
                ansA.push_back(vecA[i]);
                ansB.push_back(vecB[j]);
                i++;
                j++;
            }
            
            }else{
                while(B--){
                ansA.push_back(vecA[i]);
                ansB.push_back(vecB[l]);
                i++;
                l--;
                }
                
                while(A--){
                    ansA.push_back(vecA[i]);
                    ansB.push_back(vecB[j]);
                    i++;
                    j++;
                }
            }
            
            
            
            
            
            
            
            cout<<"YES"<<endl;
            
            for(auto it:ansA){
                cout<<it<<" ";
            }
            cout<<endl;
            
            for(auto it:ansB){
                cout<<it<<" ";
            }
            
            cout<<endl;
            
        }
    }
    return 0;
}