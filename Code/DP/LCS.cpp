#include<bits/stdc++.h>
using namespace std;
int main(){
	
	string a,b;
	cin >> a >> b;
	int n = a.length(),m = b.length();
	int dp[n+1][m+1];
	for(int i = 0;i <= n;i++){
		dp[i][0] = 0;
	}
	for(int i = 0;i <= m; i++){
		dp[0][i] = 0;
	}
	for(int i = 1;i <= n; i++){
		for(int j = 1;j <= m; j++){
			if(a[i-1] == b[j-1])
				dp[i][j] = 1+dp[i-1][j-1];
			else
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
		}
	}
	cout << "    ";
	for(int i = 0;i<n ;i++)
		cout << b[i] << " ";
	cout << endl;
	cout << "  ";
	for(int i = 0;i <= n; i++){
		if(i >= 1)
			cout << a[i-1] << " ";
		for(int j = 0;j <= m; j++){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	cout << dp[n][m];
	
	return 0;	
}
