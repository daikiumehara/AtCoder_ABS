#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int value;
    int min = 100;
    for(int i = 0; i < n; i++) {
        int count = 0;
        cin >> value;
        while(value % 2 == 0) {
            value /= 2;
            count++;
        }
        if(min > count) {
            min = count;
        }
    }
    cout << min << endl;
    return 0;
}