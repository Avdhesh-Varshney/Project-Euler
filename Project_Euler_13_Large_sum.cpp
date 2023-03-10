// Work out the first ten digits of the sum of N 50-digit numbers.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0;
    while(n--) {
        double temp;
        cin >> temp;
        sum += temp;
    }
    string str = to_string(sum);
    for(int i = 0; i < 10; i++)
        cout << str[i];
    cout << endl;
    return 0;
}