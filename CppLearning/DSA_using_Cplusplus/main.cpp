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

///--- Single Linked list Implementation --- ///
/*
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node* link;
};

struct node* root = NULL;

void append()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    cout<<"Enter a value: \n";
    cin>>temp -> data;
    temp -> link = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node* p;
        p = root;
        while(p -> link != NULL)
        {
            p = p -> link;
        }
        p -> link = temp;
    }
}

int length()
{
    struct node* temp;
    temp = root;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp -> link;
    }
    return count;
}

void first_insert()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    cout<<"Enter the value: ";
    cin>>temp -> data;
    temp -> link = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        temp -> link = root;
        root = temp;

    }
}
void middle()
{
    struct node* temp, *p;
    int location, len, i = 1;
    cout<<"Enter the location: ";
    cin>>location;
    len = length();
    cout<<"Number of nodes in list: "<<len<<" \n";
    if (location > len)
    {
        cout<<"Location out of scope.\n";
    }
    else{
        p = root;
        while (location > i)
        {
            p = p -> link;
            i++;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        temp -> link = p -> link;
        p -> link = temp;
        cout<<"Enter a value: \n";
        cin>>temp -> data;
    }
}
void removing_node()
{
    struct node* temp;
    int location, len;
    cout<<"Enter the location to delete: ";
    cin>>location;
    len = length();
    if (location > len)
    {
        cout<<"Location out of scope.\n";
    }
    else if (location == 1)
    {
        temp = root;
        root = temp -> link;
        temp -> link = NULL;
        free(temp);
    }
    else
    {
        struct node* p, *q;
        p = root;
        int i = 1;
        temp = root;
        while (location - 1 > i)
        {
            p = p -> link;
            i++;
        }
        q = p -> link;
        p -> link = q -> link;
        q -> link = NULL;
        free(q);
    }
}

void bubble_sort()
{
    int temp;
    struct node* temp1;
    struct node* temp2;
    for (temp1 = root; temp1 != NULL; temp1 = temp1 -> link)
    {
        for (temp2 = temp1 -> link; temp2 != NULL; temp2 = temp2 -> link)
        {
            if (temp1 -> data > temp2 -> data)
            {
                temp = temp2 -> data;
                temp2 -> data = temp1 -> data;
                temp1 -> data = temp;
            }
        }
    }
}

void display()
{
    struct node* temp;
    temp = root;
    if (temp == NULL)
    {
       cout<<"No elements.\n";
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d --> ", temp->data);
            temp = temp -> link;
        }
        printf("\n\n");
    }

}

int main()
{
    int num;
    cout<<"Enter Number 1 to Create and add node.\nEnter Number 2 to add node at first.\nEnter Number 3 add node at specified location.\nEnter Number 4 to remove the node.\nEnter Number 5 to Display the list.\nEnter 6 to Sort the list.\n";

    do
    {
        cout<<"Enter a number: ";
        cin>>num;
        switch (num)
        {
        case 1:
            append();
            break;
        case 2:
            first_insert();
            break;
        case 3:
            middle();
            break;
        case 4:
            removing_node();
            break;
        case 5:
            printf("\n\tLength is: %d\n", length());
            display();
            break;
        case 6:
            printf("Sorted linked list.\n");
            bubble_sort();
        }
    }while(num != 0);

    return 0;
}
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    int arr[100000], add = 0;
    auto start = system_clock::now();
    for (int i = 0; i < 100000; i++)
    {
        add += rand();
        //arr[i] = rand();        
    }
    auto end = system_clock::now();
    auto duration = duration_cast<microseconds>(end - start).count();
    cout<<"time taken in microseconds: "<<duration<<endl;
    cout<<"Addition: "<<add<<endl;
    return 0;
}