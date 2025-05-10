#include<iostream>
using namespace std;

const int P = 5, R = 3;

void calculateNeed(int need[P][R], int maxm[P][R], int allot[P][R]) {
    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            need[i][j] = maxm[i][j] - allot[i][j];
}

bool isSafe(int avail[], int maxm[][R], int allot[][R]) {
    int need[P][R];
    calculateNeed(need, maxm, allot);

    bool finish[P] = {0};
    int work[R], safeSeq[P], count = 0;
    for (int i = 0; i < R; i++) work[i] = avail[i];

    while (count < P) {
        bool found = false;
        for (int p = 0; p < P; p++) {
            if (!finish[p]) {
                int j;
                for (j = 0; j < R; j++)
                    if (need[p][j] > work[j]) break;

                if (j == R) {
                    for (int k = 0; k < R; k++) work[k] += allot[p][k];
                    safeSeq[count++] = p;
                    finish[p] = true;
                    found = true;
                }
            }
        }
        if (!found) return false;
    }

    cout << "Safe sequence: ";
    for (int i = 0; i < P; i++) cout << safeSeq[i] << " ";
    return true;
}

int main() {
    int avail[] = {3, 3, 2};
    int maxm[][R] = {{7,5,3},{3,2,2},{9,0,2},{2,2,2},{4,3,3}};
    int allot[][R] = {{0,1,0},{2,0,0},{3,0,2},{2,1,1},{0,0,2}};

    if (!isSafe(avail, maxm, allot))
        cout << "System is not in safe state\n";
    else
        cout << "System is in safe state\n";

    return 0;
}
