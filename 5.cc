#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    int count = 0;
    for(int i = 0; i <= a; i++) {
        for(int j = 0; j <= b; j++) {
            for(int k = 0; k <= c; k++) {
                if(x == i * 500 + j * 100 + k * 50) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;

    return 0;
}