// Find the sum of all the multiples of 3 or 5 below N.

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n, ans = 0;
        cin >> n;
        // adding multiples of 3
        long long q = n/3;
        ans += 3*((q*(q+1))/2);
        // adding multiples of 5
        q = n/5;
        ans += 5*((q*(q+1))/2);
        // removing common elements
        q = n/15;
        ans -= 15*((q*(q+1))/2);
        if(n%3 == 0 || n%5 == 0)
            ans -= n;
        cout << ans << endl;
    }
    return 0;
}
