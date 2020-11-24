#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int n,t;
	long long int sum = 0;
	cin >> t;
	while(t--){
		cin >> n;
		sum = n*(n+1)/2;
		for(int i=0;pow(2,i)<=n;i++){
			sum -= pow(2,i)*2;
			
		}
	}
	cout << sum << endl;

}
