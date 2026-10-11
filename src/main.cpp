
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node* prev;
    Node* next;

    Node(string value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void append(string value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void displayForward() {
        Node* current = head;
        cout << "Forward: ";

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }

        cout << endl;
    }

    void displayBackward() {
        Node* current = tail;
        cout << "Backward: ";

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->prev;
        }

        cout << endl;
    }

    void insertAfter(string target, string value) {
        Node* current = head;

        while (current != nullptr &&
               current->data != target) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << target << " not found.\n";
            return;
        }

        Node* newNode = new Node(value);
        newNode->next = current->next;
        newNode->prev = current;

        if (current->next != nullptr) {
            current->next->prev = newNode;
        } else {
            tail = newNode;
        }

        current->next = newNode;
    }

    void remove(string value) {
        Node* current = head;

        while (current != nullptr &&
               current->data != value) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << value << " not found.\n";
            return;
        }

        if (current->prev != nullptr) {
            current->prev->next = current->next;
        } else {
            head = current->next;
        }

        if (current->next != nullptr) {
            current->next->prev = current->prev;
        } else {
            tail = current->prev;
        }

        delete current;
    }
};

int main() {
    DoublyLinkedList playlist;

    playlist.append("Song A");
    playlist.append("Song B");
    playlist.append("Song C");
    playlist.append("Song D");
    playlist.append("Song E");

    playlist.displayForward();

    playlist.displayBackward();

    playlist.insertAfter("Song B", "Song X");
    playlist.displayForward();

    playlist.remove("Song C");
    playlist.displayForward();

    return 0;
}
