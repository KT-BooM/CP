#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long temp,cur= 0,ans = 0,realans = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        if(cur<temp){
            ans++;
            cur = temp;
        }
        else{
            realans = max(realans,ans);
            ans = 1;
            cur = temp;

        }


    }
    realans = max(realans,ans);
    cout << realans << endl;
    return 0;
}

