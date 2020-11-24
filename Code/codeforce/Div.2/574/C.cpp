#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll dp[n][2] = {0},h1[n],h2[n];
	for(int i = 0;i < n;i++){
		cin >> h1[i];
	}
	for(int i = 0;i < n;i++){
		cin >> h2[i];	
	}
	if(n >= 1){
		dp[0][0] = h1[0];
		dp[0][1] = h2[0];
	}
	if(n >= 2 ){
		dp[1][0] += h2[0]+h1[1];
		dp[1][1] += h1[0]+h2[1];
	}
	if(n >= 3){
		for(int i = 2;i < n;i++){
			dp[i][0] += max(dp[i-1][1],dp[i-2][1])+h1[i];
			dp[i][1] += max(dp[i-1][0],dp[i-2][0])+h2[i];
		}
	}
	cout << max(dp[n-1][0],dp[n-1][1]);
	
	
	
	return 0;
}
