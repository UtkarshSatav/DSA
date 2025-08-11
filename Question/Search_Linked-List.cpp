#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

bool searchLinkedList(Node* head, int target) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == target) {
            return true; 
        }
        current = current->next;
    }
    return false; 
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    
    int target = 2;
    if (searchLinkedList(head, target)) {
        cout << target << " Element found in the linked list." << endl;
    } else {
        cout << "Element not found in the linked list." << endl;
    }
    
    return 0;
}