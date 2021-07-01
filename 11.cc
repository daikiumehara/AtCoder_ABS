#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int t[n+1], x[n+1], y[n+1];
    for(int i = 1; i <= n; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }
    bool flag = true;
    for(int i = 0; i < n; i++) {
        int tdist = t[i+1] - t[i];
        int dist = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]); 
        if(tdist < dist) flag = false;
        if((tdist - dist) % 2 == 1) flag = false;
    }
    cout << ((flag)? "Yes" : "No") << endl;

    return 0;
}