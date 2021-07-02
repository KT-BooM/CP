#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, x[3];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[0] >> x[1] >> x[2];
        sort(x, x+3);
        cout << "Case " << i+1 << ": "<< x[1] << endl;
    }
    
	
	
	
	
	return 0;
}
