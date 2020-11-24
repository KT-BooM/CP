#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,n,ans = 0;
	ll a;
	cin >> t;
	while(t--){
		cin >> n;
		ans = 0;
		for(int i = 1;i <= 9 ;i++){
			for(int j = 0;i <=10;j++){
				if(j == 0)
					a = i;
				else
					a += i*pow(10,j);
				//cout << "a : " << a <<endl;
				if(a > n){
					a = 0;
					break;
				}
				ans++;
				
			}
		}
		cout << ans << endl;
	}
	
	
	
	
	return 0;
}
