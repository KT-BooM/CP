#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a;
	string ans = "No";
	cin >> a;
	
	for(int i = 1;i<=9;i++){
		if(a%i==0&&a/i<=9){
			ans =  "Yes";
			break;
		}
		
	}
	cout << ans;


	return 0;
}
