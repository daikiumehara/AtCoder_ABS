#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    for(int i = 0; i < 3; i++) {
        char c; cin >> c;
        if(c == '1') {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}