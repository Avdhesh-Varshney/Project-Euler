// Find the greatest product of K consecutive digits in the N digit number.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        string num;
        cin >> num;
        int ans = INT_MIN;
        for(int i = 0; i < num.length()-k+1; i++) {
            int temp = 1;
            for(int j = i; j < i+k and j < num.length(); j++)
                temp *= num[j] - '0';
            ans = max(ans, temp);
        }
        cout << ans << endl;
    }
    return 0;
}
