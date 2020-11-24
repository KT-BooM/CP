#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int n,a,b,c;
	cin >> n >> a >> b >> c;
	int dp[n+1] ;
	fill(dp,dp+n+1,INT_MIN);
	
	if(a <= n)
		dp[a] = 1;
	if(b <= n)
		dp[b] = 1;
	if(c <= n)
		dp[c] = 1;

	for(int i = 0;i <= n;i++){
		if(i-a >= a)
			dp[i] = max(dp[i-a]+1,dp[i]);
		if(i-b >= b)
			dp[i] = max(dp[i-b]+1,dp[i]);
		if(i-c >= c)
			dp[i] = max(dp[i-c]+1,dp[i]);
			
	}
//	 for(int i = 0;i<15;i++)
//	 	cout << "DP : "<< i<<" = " << dp[i] << endl;
	cout << dp[n] << endl;
	return 0;
}
