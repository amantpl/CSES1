#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    
    while(q--){
        long long k;
        cin>>k;
        
        long long start=1;
        long long count=9;
        long long digit_len=1;
        
        while(k>start+count*digit_len -1){
            start+=count*digit_len;
            count*=10;
            digit_len++;
        }
        
        long long first_num=pow(10,digit_len-1);
        long long target_num=first_num+(k-start)/digit_len;
        long long target_idx=(k-start)%digit_len;
        
        string num=to_string(target_num);
        long long ans=num[target_idx]-'0';
        cout<<ans<<endl;
        
    }
    return 0;
}