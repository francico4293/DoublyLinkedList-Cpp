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
        Node* prev;
    
    public:
        Node(int value) {
            this->value = value;
            this->next = nullptr;
            this->prev = nullptr;
        }

        int getValue(void) {
            return this->value;
        }

        Node* getNext(void) {
            return this->next;
        }

        void setNext(Node* node) {
            this->next = node;
        }

        void setPrev(Node* node) {
            this->prev = node;
        }
};

class DoublyLinkedList {
    private:
        Node* head;
        Node* tail;

    public:
        DoublyLinkedList(void) {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void addNode(Node* node) {
            if (this->head == nullptr) {
                this->head = node;
                this->tail = this->head;
                return;
            }

            Node* currNode = this->head;
            while (currNode != this->tail) {
                currNode = currNode->getNext();
            }

            currNode->setNext(node);
            node->setPrev(currNode);

            this->tail = node;
        }

        void printForward(void) {
            Node* currNode = this->head;

            cout << "LINKED LIST: ";

            while (currNode != this->tail) {
                cout << currNode->getValue() << " <-> ";
                currNode = currNode->getNext();
            }

            cout << currNode->getValue() << endl;
        }
};

int main(int argc, char* argv[]) {
    DoublyLinkedList linkedList = DoublyLinkedList();
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

    linkedList.addNode(node1);
    linkedList.addNode(node2);
    linkedList.addNode(node3);
    linkedList.printForward();

    delete node1;
    delete node2;
    delete node3;

    return 0;
}
