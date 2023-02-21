// What is the smallest positive number that is evenly divisible(divisible with no remainder) by all of the numbers from 1 to N ?

#include <bits/stdc++.h>
using namespace std;

bool isprime(int num) {
    for(int i = 2; i < num; i++)
        if(num%i == 0)
            return false;
    return true;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        long long ans = 1;
        cin >> n;
        for(int i = 2; i <= n; i++) {
            if(isprime(i)) {
                int p = 1;
                while(pow(i, p) <= n)
                    p++;
                p--;
                ans *= pow(i, p);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
