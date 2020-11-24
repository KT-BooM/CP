#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b,ans = 0;
	cin >> a >> b;
	while(true){
		if((a <= 1 && b <= 1) || a == 0 || b == 0 )
			break;
		else if(a > b){
			b++;
			a -= 2;
			ans++;
		}
		else{
			a++;
			b -= 2;
			ans++;
		}
		
	}
	cout << ans << endl;
	
	
	
	
	return 0;
}
