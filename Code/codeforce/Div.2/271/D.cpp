#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,k,a,b;
	ll ans,dp[100001],sum[100001];
	cin >> t >> k;
	
	for(int i = 0; i <= 100000;i++){
		if(i < k)
			dp[i] = 1;
		else
			dp[i] = dp[i-1] + dp[i-k];
		dp[i] %= mod;
	}
	partial_sum(dp,dp+100001,sum);
	while(t--){
		cin >> a >> b;
		cout << (sum[b]-sum[a-1])%mod << endl;
		
	}
	
	
	
	
	return 0;
}
