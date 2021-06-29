#include <bits/stdc++.h>
using namespace std;
int a,b,n;

bool judge(int i) {
    int sum = 0;
    while(i != 0) {
        sum += i % 10;
        i /= 10;
    }
    if(sum >= a && sum <= b) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cin >> n >> a >> b;
    int sum = 0;
    for(int i = 0; i <= n; i++) {
        if(judge(i)) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}