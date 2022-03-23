///---Bubble Sort---///
/*
#include<iostream>
#define N 100
using namespace std;
void bubble_sort(int array[], int n)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
int main()
{
//    int array[] = {34, 1, 2, 56, 4, 23, 78}, n = sizeof(array)/sizeof(array[0]);
    int n = 0, array[N];
    cout<<"enter the array size: ";
    cin>>n;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the element "<<i<< " : ";
        cin>>array[i];
    }
    bubble_sort(array, n);
    cout<<"The sorted array is: ";
    for (int i=0; i < n; i++)
        cout<<array[i]<<" ";
    return 0;
}
*/


///---Selection Sort---///
/*
#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int temp, min;
    for (int i = 0; i < n - 2; i++)
    {
        min = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    int arr[] = {12, 34, 10, 9, 8, 45, 11}, n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Before swapping: ";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<< arr[i] <<" ";
    }

    selectionSort(arr, n);

    cout<<"\nSorted elements are: ";
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    cout<<"\n";
    return 0;
}
*/

///--- Binary Search ---///
/*
#include <iostream>
#include <stdlib.h>
using namespace std;

int BinarySearch(int arr[], int ele, int low, int high)
{
     if (low <= high)
    {
        int mid;
        mid = low + (high - low)/2;
        if (arr[mid] > ele)
        {
            return BinarySearch(arr, ele, low, mid - 1);
        }
        else if (arr[mid] < ele)
        {
            return BinarySearch(arr, ele, mid + 1, high);
        }
        return mid;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int array[] = {12, 23, 34, 45, 56, 67, 78};
    int n = sizeof(array)/sizeof(array[0]), ele, result;
    cout<<"Enter the element to search: ";
    cin>>ele;
    result = BinarySearch(array, ele, 0, n-1);
    (result == -1) ? cout<<"\nElement is not found.\n" : cout<<"\nElement found at position: "<<result;
    return 0;
}
*/

///--- Hash tables ---///
/*
#include <iostream>
#define n 11
using namespace std;
int arr[n];

void LinearProbe()
{
    int index, hash, key, data;
    printf("Enter the key value: \n");
    scanf("%d", &key);
    printf("Enter the data value: \n");
    scanf("%d", &data);
    hash = key % n;
    for (int i = 0; i < n; i++)
    {
        index = (hash + i) % n;
        if (arr[index] == 0)
        {
            arr[index] = data;
            break;
        }
    }
}

void QuadraticProbe()
{
    int index, hash, key, data, C = 1, P = 3;
    printf("Enter the key value: \n");
    scanf("%d", &key);
    printf("Enter the data value: \n");
    scanf("%d", &data);
    hash = key % n;
    for (int i = 0; i < n; i++)
    {
        index = (hash + (C*i) + (P*i*i) ) % n;
        if (arr[index] == 0)
        {
            arr[index] = data;
            break;
        }
    }
}

void display()
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i])
        {
            printf(" %d ", arr[i]);
        }
        else
        {
            printf(" -- ");
        }
    }
    printf("\n");

}

int main()
{
    int num;
    do{
        printf("Enter the number: \n");
        scanf("%d", &num);
        switch(num)
        {
        case 1:
            LinearProbe();
            break;
        case 2:
            QuadraticProbe();
            break;
        case 3:
            display();
            break;

        }
    }while(num != 0);

    return 0;
}
*/