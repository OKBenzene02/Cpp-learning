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
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
>>>>>>> d488314 (third commit)
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

//#include<iostream>
//#include<stdlib.h>
//#include<time.h>
//#include<chrono>
//using namespace std;
//using namespace std::chrono;
//
//int Random(int n)
//{
////    int random = 1 + (rand() % n);
//    return 1 + (rand() % n);
//}
//
//
//int main()
//{
//    int count = 0, arr[10000], n = 0, ele;
//    cout<<"enter the size of the array: "<<endl;
//    cin>>n;
//    ele = Random(n);
//    cout<<"Random number to search: "<<ele<<endl;
////  Start time for assiging the values...
//    auto s1 = high_resolution_clock::now();
//    for (int i =0 ; i < n; i++)
//    {
//        arr[i]=1 + (rand() % n);
//    }
//// End time for assiging the values....
//    auto e1 = high_resolution_clock::now();
//    
//// Start time for searching the element....
//auto s2 = high_resolution_clock::now();
//    for (int i = 0; i < n; i++)
//    {
//        count++;
//        if (ele == arr[i])
//        {
//            cout<<"Element found at position "<<i<<endl;
//            break;
//        }
//    }
//    
//// End time for searching the element....
//    auto e2 = high_resolution_clock::now();
//    
//    double elap1 = double(duration_cast<microseconds>(e1 - s1).count());
//    double elap2 = double(duration_cast<microseconds>(e2 - s2).count());
//
//    cout<<"Total iterations: "<<count<<endl;
//    cout<<"For assiging the values: "<<elap1<<" microseconds"<<endl;
//    cout<<"For searching the element: "<<elap2<<" microseconds"<<endl;
//    return 0;
//}

/*
# include<iostream>
# include<time.h>
#include<stdlib.h>
int arr[100000000];
using namespace std;
int main() {
    int  n, ele = rand();
    cout<<"enter the size of the array: "<<endl;
    cin>>n;
    
    clock_t s1, e1, s2, e2;
    double et1, et2;
    
    s1 = clock();


    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }
    e1 = clock();
    
    s2 = clock();
    for (int i = 0; i < n; i++)
    {
        if (ele == arr[i])
        {
            cout<<"element found..."<<endl;
            break;
        }
    }
    e2 = clock();
    et1 = ((double)(e1 - s1)*1e-3);//CLOCKS_PER_SEC;
    et2 =  ((double)(e2 - s2)*1e-3);//CLOCKS_PER_SEC;
    cout<<"Time taken for assiging the values: "<<et1<<" milli secs"<<endl;
    cout<<"Time taken for searching the value: "<<et2<<" milli secs"<<endl;
    return 0;
}
*/

/*
 * Linear search with execution time*/
 /*
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int arr[1000*1000*100];

void linear(int n, int ele)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1 + (rand() % n);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            cout<<"element found at "<<i<<endl;
            break;
        }
    }
    cout<<"the elements in the array..."<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main(){
    int n, ele;
    cout<<"enter the array size: "<<endl;
    cin>>n;
    
    cout<<"enter the element to search: ";
    cin>>ele;
    
    cout<<"Element to search: "<<ele<<endl;
    
    clock_t start = clock();
    
    linear(n, ele);
    
    clock_t end = clock() - start;
    
    double elap = double(end)/CLOCKS_PER_SEC;
    cout<<"\nMeasured time: "<<elap<<endl;
    
    return 0;
}
*/

/* Binary search with execution time */
/*
#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int arr[1000*1000*100];

void bubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int low, int high, int ele)
{
    int mid;
    while (low <= high)
    {
        mid = (low + high)/2;
        if (arr[mid] == ele)
        {
            return mid;
        }
        
        if (arr[mid] > ele)
        {
            high = mid - 1;
        }
        
        if (arr[mid] < ele)
        {
            low = mid + 1;
        }
    }
    
    return -1;
}


int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int ele,  n, res;
    
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    
    cout<<"enter the element to search: "<<endl;
    cin>>ele;
    
    clock_t start = clock();
    
    for (int i= 0; i < n; i++)
    {
        arr[i] = 1 + (rand() % n);
    }
    
    bubbleSort(arr, n);
    
    for (int i= 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    res = binarySearch(arr, 0, n - 1, ele);
    
    clock_t end = clock();
    double elapsed = ((double)(end - start))/CLOCKS_PER_SEC;
    
    res == -1 ? cout<<"element not found...."<<endl : cout<<"element found at "<<res<<endl;
    
    cout<<"time taken: "<<elapsed<<endl;
    
    return 0;
}
*/

/*
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    int ele;
    srand(time(0));
    for (int i = 0; i < 1; i++)
    {
        ele = 1 + (rand() % 10);
    }
    cout<<"the random element "<<ele<<endl;
    return 0;
}
<<<<<<< HEAD
=======
>>>>>>> da73b4d (second commit)
>>>>>>> d488314 (third commit)
*/