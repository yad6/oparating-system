#include <iostream>
using namespace std;

int main() {
    int blocks[] = {100, 500, 200, 300, 600};
    int processes[] = {212, 417, 112, 426};
    int allocation[4] = {-1, -1, -1, -1};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (blocks[j] >= processes[i]) {
                allocation[i] = j;
                blocks[j] -= processes[i];
                break;
            }
        }
    }

    cout << "Process\tSize\tBlock\n";
    for (int i = 0; i < 4; i++) {
        cout << "P" << i + 1 << "\t" << processes[i] << "\t";
        if (allocation[i] != -1)
            cout << allocation[i] + 1;
        else
            cout << "Not Allocated";
        cout << endl;
    }
}
