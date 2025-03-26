#include <stdio.h>

const int QUEUE_SIZE = 100;

int queue[100];
int front = -1, rear = -1;

void enqueue(int value)
{
    if ((rear + 1) % QUEUE_SIZE == front)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % QUEUE_SIZE;
        }
        queue[rear] = value;
        printf("Enqueued %d\n", value);
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        int dequeued = queue[front];
        if (front == rear)
        {
            front = rear = -1; // Reset queue when empty
        }
        else
        {
            front = (front + 1) % QUEUE_SIZE;
        }
        printf("Dequeued %d\n", dequeued);
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements (front to rear):\n");
        int i = front;
        while (1)
        {
            printf("%d\n", queue[i]);
            if (i == rear)
            {
                break;
            }
            i = (i + 1) % QUEUE_SIZE;
        }
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            {
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                return 0;
            }
            default:
            {
                printf("Invalid choice. Please try again.\n");
                break;
            }
        }
    }

    return 0;
}
