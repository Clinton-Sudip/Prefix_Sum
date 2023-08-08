#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m; cin >> n >> m;
    vector<long long > v(n); vector<long long> prefix(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(i==0){
            prefix[i] = v[i];
        }
        else{
            prefix[i] = v[i] + prefix[i-1];
        }
    } 
    // for(int i=0; i<n; i++){
    //     cout << prefix[i] << " ";
    // }
    while(m > 0){
        long long l, r, sum=0; cin >> l >> r;
        if(l==1){
            sum = prefix[r-1];
        }
        else{
            sum = prefix[r-1] - prefix[l-2];
        }
        cout << sum << endl;
        m--;
    }
    return 0;
}