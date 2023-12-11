#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, count = 0, hits = 0;
    cin >> n;
    // Write C++ code here
    for(int i=0; i < n; i++) {
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;
        if(a == 1) {
           count++;
        }
        if(b==1) {
            count++;
        }
        if (c==1) {
            count++;
        }
        if(count >= 2) {
            hits++;
            count = 0;
        }
        count = 0;
    }
    cout << hits;
    return 0;
}