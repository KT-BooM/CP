#include<bits/stdc++.h>
using namespace std;

main(){
    int n,x,q,sum;
    long long y;
    cin >> n;
    vector<int> a;
    vector<int>::iterator iter = a.begin();
    while(n--){
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    cin >> q;
    while(q--){
        cin >> y;
        sum = upper_bound(a.begin(),a.end(),y)-a.begin();

        cout << sum << endl;
    }


}
