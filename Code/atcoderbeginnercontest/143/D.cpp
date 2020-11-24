#include<iostream>
using namespace std;
int main(){
	int n,count = 0;
	cin >> n;
	int d[n];
	for(int i=0;i<n;i++)
		cin >> d[i];
	
	for(int i=0;i<n;i++){
		for(int j = i+1;j<n-1;j++){
			if(d[i]<d[j]+d[j+1]&&d[j]<d[i]+d[j+1];d[j+1]<d[i]+d[j])
				count++;
		}
	}
//		for(int j=i;j<n-1;j++){
//			for(int k=j;k<n-2;k++){
//				if(d[i]<d[j+1]+d[k+2]&&d[j+1]<d[i]+d[k+2]&&d[k+2]<d[i]+d[j+1])
//					count++;
//			}
//		
//		}
	}
	cout << count;
	return 0;
}
