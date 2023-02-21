// What is the Nth prime number ?

#include <bits/stdc++.h>
using namespace std;

const int mxn = 1e7;
int a[mxn+5];
vector<int>p;

void find() {
    a[0] = a[1] = 1;
    for(int i = 2; i <= mxn; i++) {
        if(!a[i]) {
            p.push_back(i);
            for(int j = i*2; j <= mxn; j += i)
                a[j] = 1;
        }
    }
}
int main() {
    int t;
    cin >> t;
    find();
    while(t--) {
        int n;
        cin >> n;
        assert(n < p.size());
        cout << p[n-1] << endl;
    }
    return 0;
}
