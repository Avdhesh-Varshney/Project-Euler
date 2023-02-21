// Find the absolute difference between the sum of the squares of the first N natural numbers and the square of the sum.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        unsigned long long int sum_of_squares = 0, square_of_sum = 0;
        for (unsigned long long int i = 1; i <= n; i++) {
            sum_of_squares += i * i;
            square_of_sum += i;
        }
        square_of_sum *= square_of_sum;
        unsigned long long int difference = (square_of_sum - sum_of_squares);
        cout << difference << endl;
    }
    return 0;
}
