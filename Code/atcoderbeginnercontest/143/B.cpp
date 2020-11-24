#include<iostream>
using namespace std;
int main(){
	int n,sum = 0;
	cin >> n;
	int d[n];
	for(int i=0;i<n;i++)
		cin >> d[i];
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n-1;j++){
			sum += d[i]*d[j+1];
		}
	}
	cout << sum;
	return 0;
}
