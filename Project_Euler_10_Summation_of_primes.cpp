// Find the sum of all the primes not greater than given N.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    vector<pair<int, int>> N;
    for(int i = 0; i < T; i++) {
        int k;
        cin >> k;
        N.push_back(make_pair(k, i));
    }
    sort(N.begin(), N.end());
    long long int ans[T];
    int prime[1000000] = {0};
    for(int i = 2; i*i <= N[T-1].first; i++)
        if(prime[i] == 0)
            for(int j = i*i; j <= N[T-1].first; j += i)
                prime[j] = 1;
    long long int primeSum = 0;
    int j = 0;
    while (N[j].first == 1) {
        ans[N[j].second] = 0;
        j++;
    }
    for(int i = 2; i <= N[T-1].first; i++) {
        if(prime[i] == 0) {
            primeSum += i;
        }
        while(N[j].first == i) {
            ans[N[j].second] = primeSum;
            j++;
        }
    }
    for(int i = 0; i < T; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
