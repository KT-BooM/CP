#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long int temp;
	int n,x,t[10],j;
	cin >> n;
	int ans[n];
	for(int i=0;i<n;i++){
		ans[i] = 0;
		cin >> x;
		for(int k=0;k<10;k++){
			t[k] = pow(3,k);
			if(t[k]==x){
				ans[i] = x;
				break;
			}
		}
		if(ans[i]==0){
			j = 0;
			temp = t[j];
			while(temp<=x){
				if(temp == x){
					ans[i] = x;
					break;
				}
				temp+= t[++j];
			
			}	
		}
		if(ans[i]==0)
			ans[i] = pow(3,j);	
	}
	for(int i=0;i<n;i++)
		cout<< ans[i] << endl;
		

	return 0;
}
