#include <bits/stdc++.h>
using namespace std;

long long solve(vector<long long> nums){
    int n=nums.size();
    long long actualsum=0;
    long long expectedsum=(long long)(n+1)*(n+2)/2;
    for(int i=0;i<n;i++){
        actualsum+=nums[i];
    }
    long long missing=expectedsum-actualsum;
    return missing;
    
}

int main(){
    int n;
    cin>>n;
    vector<long long> nums;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    long long ans=solve(nums);
    cout<<ans<<endl;
    
    return 0;
}