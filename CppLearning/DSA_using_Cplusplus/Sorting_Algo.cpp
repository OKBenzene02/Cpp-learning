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

///--- Merge sort ---///
/*
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int arr[1000*1000*100];

void merge(int arr[],int low, int mid, int high)
{
    int i, j, k;
    int leftSize = mid - low + 1, rightSize = high - mid;
    int L[leftSize], R[rightSize];

    for (i = 0; i < leftSize; i++)
    {
        L[i] = arr[low + i];
    }

    for (j = 0; j < rightSize; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    i=0;
    j=0;
    k=low;

    while (i < leftSize && j < rightSize)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < leftSize)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < rightSize)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int n;
    cout<<"enter the array size: "<<endl;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1 + (rand() % n);
    }
    
//    cout<<"Unsorted array: ";
//    for (int i = 0; i < n; i++){
//        cout<<" "<<arr[i];
//    }
    
    clock_t start = clock();
    
    mergeSort(arr, 0, n - 1);
    
    cout<<"\nSorted array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
    clock_t end = clock() - start;
    
    double elap = double(end)/CLOCKS_PER_SEC;
    cout<<"\nMeasured time: "<<elap<<endl;
    
    
    return 0;
}
*/

///--- Heap sort ---///
/*
#include<bits/stdc++.h>

void swap(int *a, int *b)
{
    int temp= *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

int main()
{
    int array[] = {82,90,10,12,15,77,55,23}, n = sizeof(array)/sizeof(array[0]);

    heapSort(array, n);
    cout<<"The sorted array is "<<endl;
    display(array, n);
    return 0;
}
*/


///--- Quick sort ---///
/*
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int arr[1000*1000*100];

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int lo, int hi)
{
    int pivot = arr[lo], i = lo, j = hi;
    while(i < j)
    {
        do{
            i++;
        }while(arr[i] <= pivot);

        do{
            j--;
        }while(arr[j] > pivot);

        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[lo], &arr[j]);

    return j;
}

void quickSort(int arr[], int lo, int hi)
{
    if (lo < hi)
    {
        int j = partition(arr, lo, hi);
        quickSort(arr, lo, j);
        quickSort(arr, j + 1, hi);
    }

}

int main()
{
    int n;
    cout<<"enter the array size: "<<endl;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1 + (rand() % n);
    }
    
//    cout<<"Unsorted array: ";
//    for (int i = 0; i < n; i++){
//        cout<<" "<<arr[i];
//    }
    
    clock_t start = clock();
    
    quickSort(arr, 0, n);
    
    cout<<"\nSorted array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i]
    }
    
    clock_t end = clock() - start;
    
    double elap = double(end)/CLOCKS_PER_SEC;
    cout<<"\nMeasured time: "<<elap<<endl;
    
    
    return 0;
}
*/

/**** Graphs using Adjacency matrix ****/
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v;
    cout<<"enter the number of vertices: "<<endl;
    cin>>v;

    int vertices[v][v];
    
    //initialize all the values of the vertices array as zeros     
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            vertices[i][j] = 0;
        }
    }
    
    //Getting the inputs from the user asking for connecting the edge with some weight...
    //-1 for edge not connected, 1 or some random integer for edge connected... 
    
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (vertices[i][j] != 0 && vertices[i][j] != -1) 
            {
                cout<<"Connected edge for "<<i<<" and "<< j<<endl;
            }
            else if (vertices[i][j] == -1)
            {
                cout<<"edge not connected for "<<i<<" and "<<j<<endl;
            }
            else{
                cout<<"connection between "<<i<<" and "<<j<<endl;
                cin>>vertices[i][j]; 
                if (vertices[i][j] != 0)
                {
                    vertices[j][i] = vertices[i][j];
                }
                else
                {
                    vertices[j][i] = -1;
                }
            }
            
        }
    }
    cout<<endl;
    cout<<"\t"<<"The Final adjacancy matrix: "<<endl;
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (vertices[i][j] == -1)
            {
                vertices[i][j] = 0;
                cout<<"\t"<<vertices[i][j]<<"\t";
            }
            else{
                cout<<"\t"<<vertices[i][j]<<"\t";
            }
        }
        cout<<endl;
    }
        

    return 0;
}
*/

///--- Merge sort ---///
/*
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int arr[1000*1000*100];

void merge(int arr[],int low, int mid, int high)
{
    int i, j, k;
    int leftSize = mid - low + 1, rightSize = high - mid;
    int L[leftSize], R[rightSize];

    for (i = 0; i < leftSize; i++)
    {
        L[i] = arr[low + i];
    }

    for (j = 0; j < rightSize; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    i=0;
    j=0;
    k=low;

    while (i < leftSize && j < rightSize)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < leftSize)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < rightSize)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int n;
    cout<<"enter the array size: "<<endl;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1 + (rand() % n);
    }
    
//    cout<<"Unsorted array: ";
//    for (int i = 0; i < n; i++){
//        cout<<" "<<arr[i];
//    }
    
    clock_t start = clock();
    
    mergeSort(arr, 0, n - 1);
    
    cout<<"\nSorted array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
    clock_t end = clock() - start;
    
    double elap = double(end)/CLOCKS_PER_SEC;
    cout<<"\nMeasured time: "<<elap<<endl;
    
    
    return 0;
}
*/

///--- Heap sort ---///
/*
#include<bits/stdc++.h>

void swap(int *a, int *b)
{
    int temp= *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

int main()
{
    int array[] = {82,90,10,12,15,77,55,23}, n = sizeof(array)/sizeof(array[0]);

    heapSort(array, n);
    cout<<"The sorted array is "<<endl;
    display(array, n);
    return 0;
}
*/


///--- Quick sort ---///
/*
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int arr[1000*1000*100];

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int lo, int hi)
{
    int pivot = arr[lo], i = lo, j = hi;
    while(i < j)
    {
        do{
            i++;
        }while(arr[i] <= pivot);

        do{
            j--;
        }while(arr[j] > pivot);

        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[lo], &arr[j]);

    return j;
}

void quickSort(int arr[], int lo, int hi)
{
    if (lo < hi)
    {
        int j = partition(arr, lo, hi);
        quickSort(arr, lo, j);
        quickSort(arr, j + 1, hi);
    }

}

int main()
{
    int n;
    cout<<"enter the array size: "<<endl;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1 + (rand() % n);
    }
    
//    cout<<"Unsorted array: ";
//    for (int i = 0; i < n; i++){
//        cout<<" "<<arr[i];
//    }
    
    clock_t start = clock();
    
    quickSort(arr, 0, n);
    
    cout<<"\nSorted array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i]
    }
    
    clock_t end = clock() - start;
    
    double elap = double(end)/CLOCKS_PER_SEC;
    cout<<"\nMeasured time: "<<elap<<endl;
    
    
    return 0;
}
*/

/**** Graphs using Adjacency matrix ****/
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v;
    cout<<"enter the number of vertices: "<<endl;
    cin>>v;

    int vertices[v][v];
    
    //initialize all the values of the vertices array as zeros     
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            vertices[i][j] = 0;
        }
    }
    
    //Getting the inputs from the user asking for connecting the edge with some weight...
    //-1 for edge not connected, 1 or some random integer for edge connected... 
    
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (vertices[i][j] != 0 && vertices[i][j] != -1) 
            {
                cout<<"Connected edge for "<<i<<" and "<< j<<endl;
            }
            else if (vertices[i][j] == -1)
            {
                cout<<"edge not connected for "<<i<<" and "<<j<<endl;
            }
            else{
                cout<<"connection between "<<i<<" and "<<j<<endl;
                cin>>vertices[i][j]; 
                if (vertices[i][j] != 0)
                {
                    vertices[j][i] = vertices[i][j];
                }
                else
                {
                    vertices[j][i] = -1;
                }
            }
            
        }
    }
    cout<<endl;
    cout<<"\t"<<"The Final adjacancy matrix: "<<endl;
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (vertices[i][j] == -1)
            {
                vertices[i][j] = 0;
                cout<<"\t"<<vertices[i][j]<<"\t";
            }
            else{
                cout<<"\t"<<vertices[i][j]<<"\t";
            }
        }
        cout<<endl;
    }
        

    return 0;
}
*/

///--- Insertion sort ---///
/*
#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int arr[], int n)
{
    int i, j;
    i = 1;
    while (i < n)
    {
        j = i;
        while ( (j > 0) && (arr[j - 1] > arr[j]) )
        {
            swap(&arr[j], &arr[j - 1]);
            j = j - 1;
        }
        i = i + 1;
    }
    
    for (int k = 0; k < n; k++)
    {
        cout<< arr[k] <<"  ";
    }
}

int main(){
    
    int array[] = {82,90,10,12,15,77,55,23}, n = sizeof(array)/sizeof(array[0]);

    cout<<"The sorted array is "<<endl;
    insertionSort(array, n);
    
    return 0;
}*/