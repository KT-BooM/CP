#include<iostream>
using namespace std;

int main(){
	long long int t,x,y;
	cin >> t;
	string ans[t];
	for(int i = 0;i<t;i++){
		ans[i] = "NO";
		cin >> x;cin >> y;
		if(x-y>1)
			ans[i] = "YES";
		
			
	}
	for(int i = 0;i<t;i++)
		cout<<ans[i]<<endl;
	return 0;
}
