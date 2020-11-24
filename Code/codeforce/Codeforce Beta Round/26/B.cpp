#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string n;
	int l=0,ans=0;
	cin >> n;
	for(int i = 0;i < n.length() ;++i){
		if(n[i]=='(')
			l++;
		else if(n[i]==')'&&l > 0){
			ans++;
			l--;
		}
	}
	cout << ans*2;
	
	return 0;
}
