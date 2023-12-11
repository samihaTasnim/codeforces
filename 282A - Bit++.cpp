#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int hits = 0;

    for(int i=0; i < n; i++) {
        string a;
        cin >> a;
        if (a == "++X" || a == "X++") {
            hits++;
        }
        else {
            hits--;
        }
    };
    
    cout << hits;
    return 0;
};

