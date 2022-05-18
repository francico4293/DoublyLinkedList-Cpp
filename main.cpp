// Author: Colin Francis
// Description: Doubly Linked List

// Basic Operations:
//  Display forward: Print / display all the nodes from beginning to end
//  Display backwards: Print / display all the nodes from end to beginning
//  Add node: Adds a new node to the end of the linked list
//  Insertion: Inserts an element at any given position in the list
//  Deletion: Delete a node from the linked list - deletes first instance of node value
//  Search: Search for a specific node
#include <iostream>
using std::cout;
using std::endl;

class Node {
    private:
        int value;
        Node* next;
    
    public:
        Node(int value) {
            this->value = value;
            this->next = nullptr;
        }

        int getValue(void) {
            return this->value;
        }

        Node* getNext(void) {
            return this->next;
        }
};

int main(int argc, char* argv[]) {
    Node* node = new Node(10);

    cout << "Node heap address: " << node << endl;
    cout << "Node value: " << (*node).getValue() << endl;
    cout << "Node next: " << (*node).getNext() << endl;

    delete node;

    return 0;
}
