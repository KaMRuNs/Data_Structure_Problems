#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq;

    int choice, value;

    while (true) {
        cout << "\nPriority Queue Operations:\n";
        cout << "1. Insert (Enqueue)\n";
        cout << "2. Delete (Dequeue)\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to insert: ";
                cin >> value;
                pq.push(value);
                cout << "Inserted " << value << " into the priority queue.\n";
                break;

            case 2:
                if (pq.empty()) {
                    cout << "Priority queue is empty. Nothing to delete.\n";
                } else {
                    cout << "Deleted " << pq.top() << " from the priority queue.\n";
                    pq.pop();
                }
                break;

            case 3:
                cout << "Exiting program.\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}
