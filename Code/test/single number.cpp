#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ans = 0;
	cin >> n;
	int num[n];
	for(int i = 0;i<n;i++)
		cin >> num[i];
	for(int x : num){
		ans ^= x;
		cout << "ans : "<< ans << endl;
	}
	cout << ans << endl;
		
	return 0;
}



