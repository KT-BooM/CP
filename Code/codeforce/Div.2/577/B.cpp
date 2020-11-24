#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	ll sum = 0,max = INT_MIN,a;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> a;
		sum += a;
		if(a > max)
			max = a;
	}
	sum -= max;
	if(sum < max)
		cout << "NO" << endl;
	else if(sum == max || (sum - max) % 2 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	
	
	return 0;
}
