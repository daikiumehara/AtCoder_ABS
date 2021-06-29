#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            sum1 += v[i];
        } else {
            sum2 += v[i];
        }
    }
    cout << ((sum1 > sum2)? sum1-sum2 : sum2-sum1) << endl;
    return 0;
}