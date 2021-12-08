///---BST (Binary search tree)---///
/*
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct node
{
    int data;
    struct node* right;
    struct node* left;
};

struct node* root = NULL;

void adding_node()
{
    struct node* temp, *p;
    temp = (struct node*)malloc(sizeof(struct node));
    string conditon = (root == NULL) ? "root" : "node";
    cout<<"Enter a value for the "<<conditon<<" : "<<endl;
    cin>>temp -> data;
    temp -> left = NULL;
    temp -> right = NULL;
    p = root;
    if (root == NULL)
    {
        root = temp;
    }
    else{
        struct node* current;
        current = root;
        while (current)
        {
            p = current;
            if (temp -> data > current -> data)
            {
                current = current -> right;
            }
            else
            {
                current = current -> left;
            }
        }
        if (temp -> data > p -> data)
        {
            p -> right = temp;
        }
        else
        {
            p -> left = temp;
        }
    }

}

void InOrder_Traversal(struct node* temp)
{
    if (temp -> left)
    {
        InOrder_Traversal(temp -> left);
    }
    cout<<temp -> data<<" -> ";
    if (temp -> right)
    {
        InOrder_Traversal(temp -> right);
    }

}

void PostOrder_Traversal(struct node* temp)
{
     if (temp -> left)
    {
        PostOrder_Traversal(temp -> left);
    }
    if (temp -> right)
    {
        PostOrder_Traversal(temp -> right);
    }
    cout<<temp -> data<<" -> ";

}

void PreOrder_Traversal(struct node* temp)
{
    cout<<temp -> data<<" -> ";
     if (temp -> left)
    {
        PreOrder_Traversal(temp -> left);
    }
    if (temp -> right)
    {
        PreOrder_Traversal(temp -> right);
    }

}

void Desc(int num)
{
    string conditon = (root == NULL) ? "root node" : "parent and child nodes";
    if (num == 1)
    {
        system("cls");
    }
    cout<<"\tEnter 1 to create "<<conditon<<"\n\tEnter 2 to Inorder traversal\n\tEnter 3 to Postorder traversal\n\tEnter 4 to Postorder traversal\n";

}

int main()
{
    int num;
    do
    {
        Desc(num);
        cout<<"enter a number: "<<endl;
        cin>>num;
        switch (num)
        {
        case 1:
            adding_node();
            break;
        case 2:
            printf("\tIn-order traversal\n");
            InOrder_Traversal(root);
            cout<<endl;
            break;
        case 3:
            printf("\tPost-order traversal\n");
            PostOrder_Traversal(root);
            cout<<endl;
            break;
        case 4:
            printf("\tPre-order traversal\n");
            PreOrder_Traversal(root);
            cout<<endl;
            break;
        }
    }while (num != 0);

    return 0;
}
*/