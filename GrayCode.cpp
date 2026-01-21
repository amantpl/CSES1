#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin>>n;
	string st="01";
	if(n==1) {
		cout<<st[0]<<endl;
		cout<<st[1]<<endl;
	} else {
		vector<vector<string>> vec;
		vec.push_back({"01"});
		for(int i=1; i<n; i++) {
			for(int j=0; j<vec.size(); j++) {
				string res=vec[j][0];
				string res1=res;
				reverse(res1.begin(),res1.end());
				string result=res+res1;
				vec[j][0]=result;
			}

			int m=vec[0][0].size();
			string st1="";
			for(int i=0; i<m; i++) {
				if(i<m/2) {
					st1+='0';
				} else {
					st1+='1';
				}
			}
			
			vec.push_back({st1});

		}


// 		for(int i=0; i<vec.size(); i++) {
// 			cout<<vec[i][0]<<endl;
// 		}


		
		for(int i=0; i<vec[0][0].size(); i++) {
			string res="";
			for(int j=0; j<vec.size(); j++) {
				res+=vec[j][0][i];
			}
			cout<<res<<endl;
		}


	}
	return 0;
}