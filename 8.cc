#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int value;
        cin >> value;
        s.insert(value);
    }
    cout << s.size() << endl;
    return 0;
}