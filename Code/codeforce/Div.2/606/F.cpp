#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
//	vector<pair<int>> rec;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	while(n > 0){
		if(n%2!=0)
			n--;
		for(int i = 1;i <= n;i*=2){
			vector<int> row;
			vector<int> col;
			cout << i << " "<< n/i << endl;
		}
		n--;
	}
	
	
	
	return 0;
}
