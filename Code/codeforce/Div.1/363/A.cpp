#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,a;
	cin >> n;
	int dp[n][3] = {0};
	cin >> a;
	for(int i = 0;i<n;i++){
		dp[i][0] = dp[i][1] = dp[i][2] = INT_MAX;
	}
	
	dp[0][0] = 1;
	if(a == 1 || a == 3)
		dp[0][1] = 0;
	if(a == 2 || a == 3)
		dp[0][2] = 0;
	for(int i = 1; i < n; i++){
		cin >> a;
		dp[i][0] = min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2]))+1;
		if(a == 1 || a == 3)
			dp[i][1] = min(dp[i-1][0],dp[i-1][2]);
		if(a == 2 || a == 3)
			dp[i][2] = min(dp[i-1][0],dp[i-1][1]);
	}
	
	
	
//	for(int i = 0; i < n;i++){
//		for(int j = 0;j < 3;j++){
//			cout << "DP[" <<i<<"]["<<j<<"] : " << dp[i][j] <<endl; 
//		}
//		cout << endl;
//	}
	cout << min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]));
	
	return 0;
}
