///--- Convert an array to reduced form | Set 1 (Simple and Hashing) ---///
/*
#include <bits/stdc++.h>
using namespace std;

void compression(int arr[], int n)
{
    int temp[n];
    memcpy(temp, arr, n * sizeof(int));
    
    sort(temp, temp + n);
    
    unordered_map<int, int> map;
    
    int minCount = 0;
    
    for (int i = 0; i < n; i++)
    {
        map[temp[i]] = minCount++;
    }
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = map[arr[i]];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {10, 40, 20}, n = sizeof(arr)/sizeof(arr[0]);
    compression(arr, n);
    return 0;
}
*/

///--- Convert an array to reduced form | Set 1 (Simple and Hashing) ---///
/*
#include <bits/stdc++.h>
using namespace std;

void compression(int arr[], int n)
{
    vector <pair<int, int>> vec;
    
    for (int i = 0; i < n; i++)
    {
        vec.push_back(make_pair(arr[i], i));
    }
    
    sort(vec.begin(), vec.end());
    
    for (int i = 0; i < n; i++)
    {
        arr[vec[i].second] = i;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {10, 40, 20}, n = sizeof(arr)/sizeof(arr[0]);
    compression(arr, n);
    return 0;
}*/

///--- Kadane Algorithm (Maximum sum )---///
/*
#include <bits/stdc++.h>
#include<climits>
using namespace std;

int kadane(int arr[], int n)
{
    int maxSoFar = INT_MIN, maxRightNow = 0;
    
    for (int i = 0; i < n; i++)
    {
        maxRightNow = maxRightNow + arr[i];
        
        if (maxSoFar < maxRightNow)
        {
            maxSoFar = maxRightNow;
        }
        
        if (maxRightNow < 0)
        {
            maxRightNow = 0;
        }
        
    }
    
    return maxSoFar;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3}, n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum sum of contiguous elements is "<<kadane(arr, n);
    return 0;
}*/

///--- Naive Approach ---///
/*
#include <bits/stdc++.h>
using namespace std;

int maxProduct(int arr[], int n)
{
    int maxCurr = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        int maxSum = 0;
        for (int j = i; j < n; j++)
        {
            maxSum = maxSum + arr[j];
            
            if(maxCurr < maxSum)
            {
                maxCurr = maxSum;
            }
        }
    }
    
    return maxCurr;
}

int main()
{
    int A[] {-2, -3, 4, -1, -2, 1, 5, -3}, n = sizeof(A)/sizeof(A[0]);
    cout<<"Maximum sum of contiguous elements is "<<maxProduct(A, n)<<endl;
    return 0;
}
*/

///--- Activity selection algorithm ---///
/*
#include <bits/stdc++.h>
using namespace std;

void maxActivites(int start[], int finish[], int n)
{
    int k;
    
    cout<<"Max number of activites ";
    
    k = 0;
    cout<<k<<" ";

    for (int i = 1; i < n; i++)
    {
        if(start[i] >= finish[k])
        {
            cout<<i<<" ";
            k = i;
        }
    }
    
}

int main()
{
    int s[] {1, 3, 0, 5, 8, 5}, f[] {2, 4, 6, 7, 9, 9}, n = sizeof(s)/sizeof(s[0]);
    maxActivites(s, f, n);
    return 0;
    return 0;
}*/

///--- Activity selection part-2 ---///
/*
#include <bits/stdc++.h>
using namespace std;

struct activites{
  int start;
  int finish;
};

bool compare(struct activites a, struct activites b)
{
    return (a.finish < b.finish);
}

void selection(struct activites array[], int n)
{
    sort(array, array + n, compare);
    
    int k = 0;
    cout<<"The activities are "<< endl
        <<"("<<array[k].start<<", "<<array[k].finish<<")"<<endl;
    
    for (int i = 1; i < n; i++)
    {
        if (array[i].start >= array[k].finish)
        {
            cout<< "("<<array[i].start<<", "<<array[i].finish<<")"<<endl;
            k = i;
        }
    }
}

int main()
{
    struct activites arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6},{5, 7}, {8, 9}};
    int size = sizeof(arr)/sizeof(arr[0]);
    selection(arr, size);
    return 0;
}*/

