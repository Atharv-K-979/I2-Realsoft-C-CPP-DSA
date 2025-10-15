#include <bits/stdc++.h>
using namespace std;
#define N 5
class Array
{
    int arr[N];

public:
    Array()
    {
        for (int i = 0; i < N; i++)
            arr[i] = 0;
    }
    ~Array() {}
    void set(int pos, int d)
    {
        arr[pos] = d;
    }
    int get(int pos)
    {
        return arr[pos];
    }
};
class Stack : public Array
{
    int top;

public:
    Stack() : Array()
    {
        top = -1;
    }
    ~Stack() {}
    int isFull()
    {
        return (top == N - 1);
    }
    int isEmpty()
    {
        return (top == -1);
    }
    void push(int d)
    {
        if (isFull())
        {
            cout << "\nStack Overflow!";
        }
        else
        {
            set(++top, d);
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "\nStack Underflow!";
        }
        else
        {
            top--;
        }
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "\nStack is empty.";
        }
        else
        {
            cout << "\nStack elements: ";
            for (int i = 0; i <= top; i++)
                cout << get(i) << " ";
        }
    }
    void menu()
    {
        int opt, d;
        while (true)
        {
            cout << "\n\nStack Menue";
            cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit";
            cout << "\nEnter your choice: ";
            cin >> opt;
            if (opt > 3)
                return;
            switch (opt)
            {
            case 1:
                cout << "Enter data: ";
                cin >> d;
                push(d);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            }
        }
    }
};
class Queue : public Array
{
    int front, rear;

public:
    Queue() : Array()
    {
        front = rear = -1;
    }
    ~Queue() {}
    int isFull()
    {
        return (rear == N - 1);
    }
    int isEmpty()
    {
        return (front == -1 || front > rear);
    }
    void push(int d)
    {
        if (isFull())
        {
            cout << "\nQueue Overflow!";
        }
        else
        {
            if (front == -1)
                front = 0;
            set(++rear, d);
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "\nQueue Underflow!";
        }
        else
        {
            front++;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "\nQueue is empty.";
        }
        else
        {
            cout << "\nQueue elements: ";
            for (int i = front; i <= rear; i++)
                cout << get(i) << " ";
        }
    }
    void menu()
    {
        int opt, d;
        while (true)
        {
            cout << "\n\nQueue Menue";
            cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit";
            cout << "\nEnter your choice: ";
            cin >> opt;
            if (opt > 3)
                return;
            switch (opt)
            {
            case 1:
                cout << "Enter data: ";
                cin >> d;
                push(d);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            }
        }
    }
};
int main()
{
    Stack s;
    Queue q;
    int choice;
    while (1)
    {
        cout << "\n1. Stack Operations\n2. Queue Operations\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            s.menu();
            break;
        case 2:
            q.menu();
            break;
        case 3:
            return 0;
        }
    }

    return 0;
}
