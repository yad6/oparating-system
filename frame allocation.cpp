#include <iostream>
using namespace std;

int main() {
    string processes[] = {"P1", "P2", "P3", "P4"};
    int totalFrames = 16;
    int n = sizeof(processes) / sizeof(processes[0]);
    int framesPerProcess = totalFrames / n;

    cout << "Equal Frame Allocation:\n";
    for (int i = 0; i < n; i++)
        cout << processes[i] << " -> " << framesPerProcess << " frames\n";

    return 0;
}
