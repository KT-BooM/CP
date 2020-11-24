#include<bits/stdc++.h>
using namespace std;
int main(){
    bool z = false;
    int n,neg=0;
    long long a,sum=0;
    cin >> n;
    while(n--){
        cin >> a;
        if(a>1){

            sum+=a-1;
        }
        else if(a==0){
            z = true;
            sum++;
        }
        else if(a<=-1){
            neg++;
            sum+=a*-1-1;
        }

    }

    if(neg%2!=0&&!z)
        sum+=2;
    cout << sum;
    return 0;
}
