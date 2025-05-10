#include <iostream>
using namespace std;

int main() {
    int n = 3, quantum = 2;
    int bt[] = {10, 5, 8};
    int rt[3], wt[3] = {0}, t = 0;
    for (int i = 0; i < n; i++) rt[i] = bt[i];

    bool done;
    do {
        done = true;
        for (int i = 0; i < n; i++) {
            if (rt[i] > 0) {
                done = false;
                int time = min(rt[i], quantum);
                t += time;
                rt[i] -= time;
                for (int j = 0; j < n; j++)
                    if (j != i && rt[j] > 0) wt[j] += time;
            }
        }
    } while (!done);

    cout << "Process\tBT\tWT\tTAT\n";
    for (int i = 0; i < n; i++)
        cout << "P" << i+1 << "\t" << bt[i] << "\t" << wt[i] << "\t" << wt[i] + bt[i] << "\n";

    return 0;
}
