#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int totalSpace = m * n;
    int blockSpace;

        if (totalSpace%2 == 0) {
            blockSpace = totalSpace / 2;
        }
        else {
        float floatBlock;
            floatBlock = totalSpace / 2 ;
             blockSpace = floor(floatBlock);
        }

    cout << blockSpace;
    return 0;
};

