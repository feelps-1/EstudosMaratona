#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long sum = 0;
    int n;
    string s;

    cin >> n >> s;

    int r = 1;

    while(r <= n){
        for(int l = 0; l < n && l + r <= n; l++){
            long long teste = stoll(s.substr(l, r));
            sum += teste;
        }
        r++;
    }
        
    
    cout << sum;

    return 0;
}