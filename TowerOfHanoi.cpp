#include <bits/stdc++.h>
using namespace std;

void solve(int n,int source,int destination,int auxilliary){
    if(n==1){
        cout << source << " " << destination << endl;
        return ;
    }
    
    solve(n-1,source,auxilliary,destination);
    cout<<source<<" "<<destination<<endl;
    solve(n-1,auxilliary,destination,source);
}

int main(){
    int n;
    cin>>n;
    int source=1;
    int auxilliary=2;
    int destination=3;
    cout<<(1<<n)-1<<endl;
    solve(n,source,destination,auxilliary);
    cout<<endl;
    return 0;
}