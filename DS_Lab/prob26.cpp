#include <iostream>
using namespace std;

#define SIZE 5
class CircularQueue {
    int items[SIZE], front, rear;
public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (front == 0 && rear == SIZE - 1) || (rear == (front - 1) % (SIZE - 1));
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }
        if (front == -1) front = rear = 0;
        else if (rear == SIZE - 1 && front != 0) rear = 0;
        else rear++;

        items[rear] = value;
        cout << "Inserted: " << value << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Deleted: " << items[front] << endl;

        if (front == rear) front = rear = -1;
        else if (front == SIZE - 1) front = 0;
        else front++;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++) cout << items[i] << " ";
        } else {
            for (int i = front; i < SIZE; i++) cout << items[i] << " ";
            for (int i = 0; i <= rear; i++) cout << items[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;
    int choice, value;
    while (true) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }
}
