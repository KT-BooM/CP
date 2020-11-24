#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ans=0,count=0;
	vector<int> check;
	vector<char> prime(n+1,true); // vector<char> instead
	prime[0] = prime[1] = false;
	cin >> n;
	prime[0] = false;
	for(int i = 2;i<=n;++i){
		if(prime[i]){
			check.push_back(i);
			for(int j = i*i;j<=n;j+=i){
				prime[j] = false;
			}
		}
	}	
	for(int i = 2;i<=n;++i){
		count = 0;
		if(prime[i]==false)
			for(auto j : check){
				if(i%j==0){
					count++;
				}
			}
			if(count == 2)
				ans++;
	}
//	for(auto i : check)
//		cout << i << endl;
	cout << ans;
	
	return 0;
}
