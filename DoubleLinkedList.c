🌟 AIM: To implement a Doubly Linked List and perform basic operations
AIM:
To create a C program that performs the following operations on a Doubly Linked List:

Insert a node at the beginning

Insert a node at the end

Insert a node at a specific position

Delete a node by value

Display the list in forward direction

Display the list in reverse direction

🧭 Algorithm
Step 1: Start
Step 2: Create a structure Node with:
int data

struct Node *prev

struct Node *next

Step 3:
To insert at beginning:

Create new node

If list is empty, newNode becomes head

Else set newNode→next = head and head→prev = newNode

Update head = newNode

Step 4:
To insert at end:

Create new node

If list is empty, head = newNode

Else traverse to last node

Connect last node and new node appropriately

Step 5:
To insert at a given position:

Traverse to position-1 node

Insert new node between nodes

Update prev and next pointers accordingly

Step 6:
To delete a node by value:

Traverse to find matching data

If found:

Adjust pointers of previous and next nodes

If deleting head, move head to next node

Free memory

Step 7:
To display forward:

Start from head and print each node's data

Step 8:
To display reverse:

Traverse to last node

Print backwards using prev pointers

Step 9: Stop

#include <stdio.h>
#define SIZE 5   // Maximum size of the queue

int queue[SIZE];
int front = -1, rear = -1;   // Queue initially empty

//------------------------------
// ENQUEUE operation (Insert)
//------------------------------
void enqueue(int value) {

    // Check if queue is full
    if (rear == SIZE - 1) {
        printf("Queue is Full!\n");
    } 
    else {

        // If inserting the first element
        if (front == -1) 
            front = 0;

        rear++;               // Move rear forward
        queue[rear] = value;  // Insert value at rear

        printf("Inserted %d\n", value);
    }
}

//------------------------------
// DEQUEUE operation (Delete)
//------------------------------
void dequeue() {

    // Check if queue is empty
    if (front == -1 || front > rear) {
        printf("Queue is Empty!\n");
    } 
    else {
        // Print element being deleted
        printf("Deleted %d\n", queue[front]);

        front++;  // Move front forward
    }
}

//------------------------------
// DISPLAY operation
//------------------------------
void display() {

    // Check if queue is empty
    if (front == -1 || front > rear) {
        printf("Queue is Empty!\n");
    } 
    else {
        printf("Queue elements: ");

        // Print from front to rear
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);

        printf("\n");
    }
}

//------------------------------
// MAIN program execution
//------------------------------
int main() {

    enqueue(10);  // Insert 10
    enqueue(20);  // Insert 20
    enqueue(30);  // Insert 30
    display();    // Show queue

    dequeue();    // Remove front element
    display();    // Show queue after deletion

    enqueue(40);  // Insert 40
    enqueue(50);  // Insert 50
    enqueue(60);  // Should display full
    display();    // Final queue display

    return 0;
}
