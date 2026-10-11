#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node* prev;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;

Node* createNode(string x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertLast(string x) {
    Node* newNode = createNode(x);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void printList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) cout << " <-> ";
        temp = temp->next;
    }
    cout << endl;
}

void printForward() {
    cout << "Forward:" << endl;
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void printBackward() {
    cout << "Backward:" << endl;
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->prev;
    }
}

Node* search(string x) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == x) return temp;
        temp = temp->next;
    }
    return NULL;
}

void insertAfter(string x, string y) {
    Node* p = search(x);
    if (p == NULL) {
        cout << "Data tidak ketemu" << endl;
        return;
    }
    Node* newNode = createNode(y);
    newNode->next = p->next;
    newNode->prev = p;
    if (p->next != NULL) {
        p->next->prev = newNode;
    } else {
        tail = newNode;
    }
    p->next = newNode;
}

void deleteNode(string x) {
    Node* p = search(x);
    if (p == NULL) {
        cout << "Data tidak ketemu" << endl;
        return;
    }
    if (p->prev != NULL) {
        p->prev->next = p->next;
    } else {
        head = p->next;
    }
    if (p->next != NULL) {
        p->next->prev = p->prev;
    } else {
        tail = p->prev;
    }
    delete p;
}

void deleteNodeBug(string x) {
    Node* p = search(x);
    if (p == NULL) return;
    if (p->prev != NULL) {
        p->prev->next = p->next;
    } else {
        head = p->next;
    }
}

void resetList() {
    head = NULL;
    tail = NULL;
}

int main() {
    cout << "Task 2: Buat List" << endl;
    insertLast("Song A");
    insertLast("Song B");
    insertLast("Song C");
    insertLast("Song D");
    insertLast("Song E");
    printList();

    cout << endl << "Task 3: Forward" << endl;
    printForward();

    cout << endl << "Task 4: Backward" << endl;
    printBackward();

    cout << endl << "Task 5: Insert Song X" << endl;
    insertAfter("Song B", "Song X");
    printList();
    printForward();
    printBackward();

    cout << endl << "Task 6: Delete Song C" << endl;
    deleteNode("Song C");
    printList();
    printForward();
    printBackward();

    cout << endl << "Task 7: Browser History" << endl;
    resetList();
    insertLast("google.com");
    insertLast("youtube.com");
    insertLast("github.com");
    Node* now = tail;
    cout << "Halaman sekarang: " << now->data << endl;
    now = now->prev;
    cout << "Tekan Back: " << now->data << endl;
    now = now->next;
    cout << "Tekan Forward: " << now->data << endl;

    cout << endl << "Task 8: Prediksi" << endl;
    resetList();
    insertLast("A");
    insertLast("B");
    insertLast("C");
    insertLast("D");
    cout << "Prediksi: A <-> B <-> D" << endl;
    deleteNode("C");
    cout << "Hasil   : ";
    printList();

    cout << endl << "Task 9: Bug (lupa update prev)" << endl;
    resetList();
    insertLast("A");
    insertLast("B");
    insertLast("C");
    insertLast("D");
    deleteNodeBug("C");
    printForward();
    printBackward();
    cout << "Backward masih ada C, padahal sudah dihapus!" << endl;

    cout << endl << "Task 9: Setelah diperbaiki" << endl;
    resetList();
    insertLast("A");
    insertLast("B");
    insertLast("C");
    insertLast("D");
    deleteNode("C");
    printForward();
    printBackward();

    return 0;
}
