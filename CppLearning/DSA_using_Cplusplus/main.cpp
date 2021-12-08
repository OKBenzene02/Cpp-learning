///---Queue---///
/*
#include <iostream>
using namespace std;
#define N 5

int queue[N];
int tail = 0, head = 0;

void enqueue()
{
    int num;
    cout<<"Enter the value: ";
    cin>>num;
    if (tail == N)
    {
        cout<<"OverFlow\n";
    }
    else
    {
        queue[tail] = num;
        tail++;
    }
}

void dequeue()
{
    int element;
    if (head && tail == 0)
    {
        cout<<"UnderFlow\n";
    }
    else
    {
        element = queue[head];
        cout<<"Dequeued element: "<<element<<endl;
        head++;
    }
}

void display()
{
    if(tail == 0)
    {
        cout<<"UnderFlow\n";
    }
    else
    {
        cout<<"Queue values: ";
        for (int i = 0; i < N; i++)
            cout<<queue[i]<<"  ";
        cout<<endl;
    }
}


int main()
{
    int n;
    do{
    cout<<"Enter the number: ";
    cin>>n;
    switch(n)
    {
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
        display();
        break;
    default :
        cout<<"Invalid Input";
    }

    }while(n != 0);
    return 0;
}
*/

///---Stack---///
/*
#include<iostream>
using namespace std;
#define N 5
int stack[N];
int top = -1;

void push()
{
    int element;
    cout<<"Enter a value: "<<endl;
    cin>>element;
    if (top == N - 1)
    {
        cout<<"OverFlow"<<endl;
    }
    else
    {
        top++;
        stack[top] = element;
    }
}

void pop()
{
    int element;
    if (top == -1)
    {
        cout<<"UnderFlow"<<endl;
    }
    else
    {
        element = stack[top];
        top--;
        cout<<"Popped element: "<< element <<endl;
    }
}

void display()
{
    if (top == -1)
    {
        cout<< "UnderFlow"<<endl;
    }
    else{
    cout<<"Stack elements are: "<<endl;
    for (int i = top; i >= 0; i--)
    {
        cout<<"\t"<<stack[i]<<endl;

    }
    }
}

int main()
{
    int num;
    do
    {
    cout << "Enter a number: "<< endl;
    cin>>num;
    switch (num)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
        }
    }while (num != 0);
    return 0;
}
*/