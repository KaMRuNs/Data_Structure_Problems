#include <iostream>
using namespace std;

void towerOfHanoi(int n, char fromRod, char toRod, char auxRod) {
    if (n == 1) {
        cout << "Move disk 1 from " << fromRod << " to " << toRod << endl;
        return;
    }
    towerOfHanoi(n - 1, fromRod, auxRod, toRod);
    cout << "Move disk " << n << " from " << fromRod << " to " << toRod << endl;
    towerOfHanoi(n - 1, auxRod, toRod, fromRod);
}

int main() {
    int disks;
    cout << "Enter the number of disks: ";
    cin >> disks;

    towerOfHanoi(disks, 'A', 'C', 'B');
    return 0;
}
