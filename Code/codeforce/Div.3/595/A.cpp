#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,q;
	cin >> n;
	int a[n],ans[n];
	
	for(int i=0;i<n;i++){
		ans[i] = 1;
		cin >> q;
		for(int k=0;k<q;k++)
			cin >> a[k];
		for(int k=0;k<q;k++){
			for(int j=k;j<q;j++){
				if((a[k]-a[j])==1||(a[j]-a[k])==1){
					ans[i] = 2;
					break;	
				}
			}
		}
	}
	
	for(int i=0;i<n;i++)
		cout<< ans[i]<< endl;
		

	return 0;
}
