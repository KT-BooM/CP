#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	long long n,p,ans,tmp;
	cin >> n >> p;
	tmp = n;
	ans = n;
	if(p == 0)
		cout << 1;
	else{
	
		for(int i = 0;i < p-1;i++){ // 3
			for(int j = 0;j < n-1;j++){
				ans += tmp;
			//	cout << tmp << " : " << ans << endl;
			}
			tmp = ans;
		}
		cout << ans;
	}
	
	
	
	return 0;
}
