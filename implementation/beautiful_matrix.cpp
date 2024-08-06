#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n=5;
	vector<vector<int>>mat(n,vector<int>(n));
	int idx1=0,idx2=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mat[i][j];
			if(mat[i][j]){
				idx1=i,idx2=j;
			}
		}
	}
	int res=(abs(2-idx1)+abs(2-idx2));
	cout<<res;
	return 0;
}