#include<iostream>
using namespace std;

// Define the class for a node in the linked list
class myNode {
    public:
        int data;       // Data to be stored in the node
        myNode* next;   // Pointer to the next node in the linked list
        
        // Constructor to initialize a new node with a given value
        myNode(int value) {
            this->data = value;
            this->next = NULL;
        }
};

// Function to insert a node at the tail of the linked list
myNode* insertAtTail(int value, myNode* &head, myNode* &tail) {
    if(head == NULL && tail == NULL) {
        // If the list is empty, create the first node
        myNode* firstNode = new myNode(value);
        head = firstNode;
        tail = firstNode;
    } else {
        // Otherwise, create a new node and append it to the end
        myNode* newNode = new myNode(value);
        tail->next = newNode;
        tail = newNode;
    }
    return head;
}

// Function to insert a node at the head of the linked list
myNode* insertAtHead(int value, myNode* &head, myNode* &tail) {
    if(head == NULL && tail == NULL) {
        // If the list is empty, create the first node
        myNode* firstNode = new myNode(value);
        head = firstNode;
        tail = firstNode;
    } else {
        // Otherwise, create a new node and set it as the new head
        myNode* newNode = new myNode(value);
        newNode->next = head;
        head = newNode;
    }
    return head;
}

// Function to get the length of the linked list
int getLen(myNode* head) {
    myNode* temp = head;
    int count = 0;
    
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to insert a node at a specific position in the linked list
myNode* insertAtPosition(int position, int value, myNode* &head, myNode* &tail) {
    int length = getLen(head);
    if(position < 1 || position > (length + 1)) {
        cout << "Enter a valid position!" << endl;
        return head;
    }
    
    if(position == 1) {
        return insertAtHead(value, head, tail);
    } else if(position == (length + 1)) {
        return insertAtTail(value, head, tail);
    } else {
        myNode* temp = head;
        int count = 1;
        
        while(count < (position - 1)) {
            temp = temp->next;
            count++;
        }
        myNode* midNode = new myNode(value);
        midNode->next = temp->next;
        temp->next = midNode;
    }
    return head;
}

// Function to delete a node at a specific position in the linked list
void deleteNode(int position, myNode* &head, myNode* &tail) {
    if(head == NULL && tail == NULL) {
        cout << "LinkedList is empty!" << endl;
        return;
    }
    
    if(position < 1 || position > getLen(head)) {
        cout << "Enter a valid position!" << endl;
        return;
    }
    
    if(head == tail) {
        // If there's only one node in the list
        myNode* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    } else {
        if(position == 1) {
            // If deleting the head node
            myNode* temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        } else {
            myNode* prev = head;
            int count = 1;
            
            while(count < (position - 1)) {
                prev = prev->next;
                count++;
            }
            
            myNode* curr = prev->next;
            prev->next = curr->next;
            if(curr == tail) {
                // If deleting the tail node
                tail = prev;
            }
            curr->next = NULL;
            delete curr;
        }
    }
    return;
}

// Function to print the linked list
void print(myNode* head) {
    myNode* temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    myNode* head = NULL;
    myNode* tail = NULL;
    
    cout << "Inserting at head..." << endl;
    insertAtHead(10, head, tail);
    insertAtHead(20, head, tail);
    print(head);
    
    cout << "Inserting at tail..." << endl;
    insertAtTail(30, head, tail);
    insertAtTail(40, head, tail);
    print(head);
    
    cout << "Insert at any position..." << endl;
    insertAtPosition(2, 50, head, tail);
    insertAtPosition(3, 60, head, tail);
    print(head);
    
    cout << "Deleting node at position 1" << endl;
    deleteNode(1, head, tail);
    print(head);
    
    cout << "Deleting node at position 3" << endl;
    deleteNode(3, head, tail);
    print(head);
    
    cout << "Deleting node at tail" << endl;
    deleteNode(4, head, tail);
    print(head);
    
    cout << "Deleting node at invalid position" << endl;
    deleteNode(6, head, tail);
    print(head);
    
    return 0;
}
