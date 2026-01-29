#include <bits/stdc++.h>
using namespace std;

bool check(vector<vector<bool>>& marked){
    int n=marked.size();
    int m=marked[0].size();
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(marked[i][j]==false){
                return false;
            }
        }
    }
    
    return true;
}

int main() {
	int n,m;
	cin>>n>>m;
	vector<vector<char>> vec(n,vector<char>(m));
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>vec[i][j];
		}
	}

	queue<pair<char,pair<int,int>>> q;
	vector<vector<bool>> vis(n,vector<bool>(m,false));

	vector<vector<bool>> marked(n,vector<bool>(m,false));

	q.push({vec[0][0],{0,0}});
	vis[0][0]=true;

	vector<pair<int,int>> directions= {{1,0},{0,1},{-1,0},{0,-1}};



	while(!q.empty()) {

		char ch=q.front().first;
		int row=q.front().second.first;
		int col=q.front().second.second;
		q.pop();
		vector<pair<bool,char>> placed= {{false,'A'},{false,'B'},{false,'C'},{false,'D'}};

		int index=ch-'A';
		placed[index].first=true;

		for(auto it:directions) {
			int x=it.first+row;
			int y=it.second+col;

			if(x>=0 && x<n && y>=0 && y<m && marked[x][y]) {
				char ch1=vec[x][y];
				int i=ch1-'A';
				placed[i].first=true;
			}
		}

		

		for(auto it:placed) {
			if(it.first==false) {
				vec[row][col]=it.second;
				marked[row][col]=true;
				break;
			}
		}
		
		if(marked[row][col]==false){
		    break;
		}





		for(auto it:directions) {
			int x=it.first+row;
			int y=it.second+col;

			if(x>=0 && x<n && y>=0 && y<m && !vis[x][y]) {
			    vis[x][y]=true;
			    q.push({vec[x][y],{x,y}});
			}
		}



	}
	
	bool flag=check(marked);
	
	if(flag){
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cout<<vec[i][j];
	        }
	        cout<<endl;
	    }
	}else{
	    cout<<"IMPOSSIBLE"<<endl;
	}



	return 0;
}