///--Implementation of Stack using linked list--///
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

void push()
{
    struct node* temp;
    temp = (struct node* )malloc(sizeof(struct node));
    cout<<"Enter a value: "<<endl;          //printf("Enter a value: ");
    cin>> temp->data;            //scanf("%d", &temp -> data);
    temp -> link = root;
    root = temp;
}

void pop()
{
    struct node* temp;
    if (root == NULL)
    {
        cout<< "Stack underFlow."<<endl; //printf("Stack UnderFlow\n");
    }
    else{
        cout<<"Popped element: "<<root -> data<<endl;  //printf("Popped element: %d\n", root -> data);
        temp = root;
        root = root -> link;
        free(temp);
    }
}
void display()
{
    struct node* temp;
    temp = root;
    if (temp == NULL)
    {
        cout<<"Stack UnderFlow."<<endl; //printf("Stack UnderFlow.\n");
    }
    else
    {
        cout<<"Elements in stack: "<<endl; //printf("Elements in stack: ");
        while(temp != NULL)
        {
            cout<<temp -> data<<endl; //printf("%d -> ", temp -> data);
            temp = temp -> link;
            
        }
        cout<<endl;
    }
}
int main()
{
    int num;
    cout<<"Enter 1 to Push elements.\nEnter 2 to pop elements.\nEnter 3 to display elements.\n";
    do
    {
        cout<<"Enter a number: "<<endl; //printf("Enter a number: ");
        cin>>num; //scanf("%d", &num);
        switch(num)
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
    }while(num != 0);
    return 0;
}
*/

///---Queue implementation using linked list---///
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node* link;
};

struct node *head = NULL, *tail = NULL;

void enqueue()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    cout<<"Enter the value: "<<endl; //printf("Enter the value: ");
    cin>> temp->data; //scanf("%d", &temp->data);
    temp -> link = NULL;
    if (tail == NULL)
    {
        tail = head = temp;
    }
    else
    {
        struct node* p;
        p = tail;
        while (p -> link != NULL)
        {
            p = p -> link;
        }
        p -> link = temp;
    }
}

void dequeue()
{
    struct node* temp;
    if (tail && head == NULL)
    {
        cout<<"Queue UnderFlow."<<endl; //printf("Queue UnderFlow\n");
    }
    else
    {
        cout<<"Dequeued element: "<<head -> data<<endl; //printf("Dequeued element: %d\n", head -> data);
        temp = head;
        head = head -> link;
        free(temp);
    }
}
void display()
{
    struct node* temp;
    temp = head;
    if (temp == NULL)
    {
        cout<<"Queue UnderFlow."<<endl; //printf("Queue UnderFlow.\n");
    }
    else
    {
        cout<<"Queue elements: "<<endl; //printf("Queue Elements: ");
        while(temp != NULL)
        {
            cout<<temp -> data<<" --> "; //printf("%d ", temp -> data);
            temp = temp -> link;
        }
        cout<<endl; //printf("\n");
    }

}

int main()
{
    int num;
    cout<<"Enter 1 to Enqueue elements.\nEnter 2 to Dequeue elements.\nEnter 3 to display elements.\n";
    do
    {
        cout<<"Enter a number: "<<endl; //printf("Enter a number: ");
        cin>> num; //scanf("%d", &num);
        switch(num)
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
        }
    }while(num != 0);
    return 0;
}
*/

///---String reversal using Stack---///
/*
#include<iostream>
#include<string.h>
#define N 100
using namespace std;

char stack[N];
int top = -1;

void push(char x)
{
    if (top == N - 1)
    {
        cout<<"OverFlow"<<endl;
    }
    else
    {
        top++;
        stack[top] = x;
    }

}
void pop()
{
    if (top == -1)
    {
        cout<<"UnderFlow"<<endl;
    }
    else
    {
        cout<<stack[top];
        top--;
    }
}

int main()
{
    char string[] = "Hello good morning";
    int len = strlen(string);
    for (int i = 0; i < len; i++)
        push(string[i]);
    for (int i = 0; i < len; i++)
        pop();

    return 0;
}
*/

///---Polynomial using linked lists---///
/*
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int coeff;
    int exp;
    struct node* link;
};

struct node *root = NULL;

void polynomial(){
    struct node* temp;
    temp = (struct node* )malloc(sizeof(struct node));
    temp -> link = NULL;
    cout<<"Enter the coefficient"<<endl; //printf("Enter the coefficient: \n");
    cin>>temp->coeff;                    //scanf("%d", &temp -> coeff);
    cout<<"Enter the Power: "<<endl;     //printf("Enter the Power: \n");
    cin>>temp->exp;                      //scanf("%d", &temp -> exp);
    if (root == NULL){
        root = temp;
    }
    else{
        struct node* p;
        p = root;
        while(p ->link != NULL){
            p = p ->link;
        }
        p ->link = temp;
    }
}

void equation()
{
    if (root == NULL)
    {
        cout<<"No inputs given."<<endl;         //printf("No inputs given.\n");
    }
    else
    {
        struct node* p;
        p = root;
        while (p != NULL)
        {
            cout<<" ("<<p ->coeff<<"x^"<<p->exp<<") "; //printf(" (%dx^%d) ", p -> coeff, p -> exp);
            p = p -> link;
            if(p != NULL)
            {
                cout<<"+";                  //printf("+");
            }
            else
            {
                cout<<endl;                 //printf("\n");
            }
        }
    }

}


int main(){
    int num;
    do
    {
        cout<<"Enter a number: "<<endl; //printf("Enter a number: \n");
        cin>>num;                        //scanf("%d", &num);
        switch(num)
        {
        case 1:
            polynomial();
            break;
        case 2:
            equation();
            break;
        }
    }while(num != 0);
    return 0;
}
*/