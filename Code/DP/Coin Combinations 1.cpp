#include<bits/stdc++.h>
using namespace std;
int main(){
	const int INF = 1e7+5;
	int n,m,mn;
	cin >> n >> m;
	int a[m],dp[n+1] = {INF};
	for(int i = 0; i < m; i++)
		cin >> a[i];
	fill(dp,dp+n+1,INF);
	for(int i = 0; i < m; i++)
		dp[a[i]] = 1;
	dp[0] = 0;
	for(int i = 0; i < n; i++){
		cout << dp[i] << endl;
	}
	for(int i = 1; i <= n; i++){
		mn = INF;
		for(int j : a){
			cout << "i : " << i << " a : " << j << endl;
			if(i >= j){
			cout << "dp[i] : " << dp[i] << " dp[i-a] : " << dp[i-j] << endl;
			dp[i] = min(dp[i],dp[i-j])+1;
			mn = min(mn,dp[i]);
			}
			dp[i] = mn;
			
		}
		
		cout << endl;
	}
	for(int i = 0; i <= n; i++){
	
		cout << dp[i] << " ";
	}
	cout << endl;
	cout << dp[n];
	return 0;
}
