// You are given around five-thousand first names, begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, multiply this value by its alphabetical position 
// in the list to obtain a name score. For example, when the list in sample is sorted into alphabetical order, PAMELA, which is worth 16+1+13+5+12+1 = 48, is the 5th name in the list. 
// So, PAMELA would obtain a score of 5x48 = 240.
// You are given Q queries, each query is a name, you have to print the score.

#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, t;
    cin >> n;
    vector<string> s(n); 
    for (int i = 0; i < n; i++)
        cin >> s[i];
    sort(s.begin(), s.end());
    unordered_map<string, int> arr;
    for(int i = 0; i < n; i++)
        arr[s[i]] = i+1;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        int sum = 0;
        for(auto x: str)
            sum = sum + (x-64);
        cout << sum*arr[str] << endl;
    }
    return 0;
}