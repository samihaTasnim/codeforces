#include <bits/stdc++.h>
using namespace std;

int main() {
    int participantNum, positionof = 0, hits = 0;
    cin >> participantNum;
    cin >> positionof;
    // Write C++ code here

    int participantarr[participantNum];
    for(int i=0; i < participantNum; i++) {
        int a;
        cin >> a;
        participantarr[i] = a;
    };
    for (int j = 0; j < participantNum; j++) {
         if(participantarr[j] >= participantarr[positionof-1] && participantarr[j] > 0) {
                     hits++;
        };
    };
    cout << hits;
    return 0;
}

