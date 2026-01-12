#include <bits/stdc++.h>
using namespace std;



long long solve(vector<long long>& arr){
    int n=arr.size();
    long long ans=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            ans+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }else{
            continue;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long result=solve(arr);
    cout<<result<<endl;
    return 0;
}