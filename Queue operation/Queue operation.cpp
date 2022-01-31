#include<iostream>
#define MAX 5
using namespace std;
void insert(void);
void del();
void display(void);
int queue_array[MAX];
int rear = -1;
int front = -1;
int main()
{
    int choice;
    do
    {
        cout << "1. Insert element to queue" << endl;
        cout << "2. Delete element from queue" << endl;
        cout << "3. Display all elements of queue" << endl;
        cout << "4. Quite" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong input");
            break;
        }
    } while (choice != 4);
    return 0;
}

void insert()
{
    int add_item;
    if (rear == MAX - 1)
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        cout << "Insert the element in queue : ";
        cin >> add_item;
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}

void del()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        cout << "Element deleted from queue is : " << queue_array[front];
        front = front + 1;
    }
}

void display()
{
    int i;
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is : " << endl;
        for (i = front; i <= rear; i++)
        {
            cout << queue_array[i] << endl;
        }
    }
}