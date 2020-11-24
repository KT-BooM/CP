#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main(){
	int n;
	cin >> n;
	int a[n],dp[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	dp[0] = 1; 
	for (int i = 1; i < n; i++ )  
    { 
        dp[i] = 1; 
        for (int j = i-1; j >= 0; j-- )   
            if ( a[i] > a[j] && dp[i] <= dp[j])  
                dp[i] = dp[j] + 1;  
    } 
	
//	for(int i = 0;i<n;i++){
//		cout << dp[i] << endl;
//	}

	cout << *max_element(dp,dp+n);
	
	return 0;
}
