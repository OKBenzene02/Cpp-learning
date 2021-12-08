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

    selectionSort(arr, n);

    cout<<"Sorted elements are: ";
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}
*/