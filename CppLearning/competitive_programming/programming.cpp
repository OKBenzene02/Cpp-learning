/**** Reverse an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[5] = {12, 23, 44, 432, 11};
    for (int i = 5 - 1 ; i >= 0; i--)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
*/

/** Reverse an array problem**/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, T;
    
//    cout<<"Enter number of test cases: "<<endl;
    cin>>T;
    
    for (int i = 0; i < T; i++)
    {
//        cout<<"Enter the size of the array: "<<endl;
        cin>>N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }
        
        for (int i = N - 1; i >= 0; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
*/

/** Reversed square of the numbers **/ 
/*
#include <bits/stdc++.h>
using namespace std;
int arr[10000000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[] = {1, 2, 3}, sum = 0, n = sizeof(arr)/sizeof(arr[0]);
    for (int i = n - 1; i >= 0; i--)
    {
        if (n % 2 == 0)
        {
            if (i % 2 != 0)
            {
                sum += arr[i] * arr[i];
            }
            else
            {
                sum -= arr[i] * arr[i];
            }
            
        }
        else{
            if (i % 2 != 0)
            {
                sum -= arr[i] * arr[i];
            }
            else
            {
                sum += arr[i] * arr[i];
            }
        }
    }
    
    cout<<"The sum is: "<<sum;
    return 0;
}
*/

/**** Reversed Array with Square of the numbers ****/
/*
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int sumArr[1000000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, N, sum = 0;
    cout<<"enter the test cases: "<<endl;
    cin>>T;
    for (int j = 0; j < T; j++)
    {
        cout<<"enter the size of the array: "<<endl;
        cin>>N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }
        sum = 0;
        for (int i = N - 1; i >= 0; i--)
        {
            if (N % 2 == 0)
            {
                if (i % 2 != 0)
                {
                    sum += arr[i] * arr[i];
                }
                else
                {
                    sum -= arr[i] * arr[i];
                }
                
            }
            else{
                if (i % 2 != 0)
                {
                    sum -= arr[i] * arr[i];
                }
                else
                {
                    sum += arr[i] * arr[i];
                }
            }
        }
        
        sumArr[j] = sum;    
    }
    
    for (int i = 0; i < T; i++)
    {
        cout<<sumArr[i]<<endl;
    }
    
    
    return 0;
}
*/

/***** Sum of the given digits *****/
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number: "<<endl;
    cin>>num;
    int sum = 0;
    while (num != 0)
    {
        sum += (num % 10);
        num /= 10;
    }
    cout<<sum;
    return 0;
}
*/

/*** String datatype ***/
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string hello = "abcdefghijklmnopqrstuvwxyz";
    cout<<hello.length()<<endl;
    for (int i = hello.length() - 1; i >= 0; i--)
    {
        cout<<hello[i];
    }
    return 0;
}
*/

/**** Sum of digits (example) ****/
/*
#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;
    while (n != 0)
    {
        sum = sum + (n % 10);
        n /= 10;
    }
    
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char string[] = "abcdefghijklmnopqrstuvwxyz";
    char reversedString[] = "zyxwvutsrqponmlkjihgfedcba";
    int N = 30;

    if (N % 2 == 0)
    {
        if (N <= 26)
        {
            int firstHalf = N/2;
            int secondHalf = N/2;
            for (int i = 0; i < firstHalf; i++)
            {
                cout<<string[i];
            }
            
            for (int i = secondHalf - 1; i >= 0; i--)
            {
                cout<<reversedString[i];
            }
            
        }
        else{
            int one_cycle = N / 26;
            int firstHalf = (N - (one_cycle * 26)) / 2;
            int secondHalf = (N - (one_cycle * 26)) / 2;
            for (int j = 0; j < one_cycle; j++)
            {
                for (int i = 0; i < (int)strlen(string); i++)
                {
                    cout<<string[i];
                }                
            }
            
            for (int i = 0; i < firstHalf; i++)
            {
                cout<<string[i];
            }
            
            for (int i = secondHalf - 1; i >= 0; i--)
            {
                cout<<reversedString[i];
            }
            
        }
    }
    
    else{
        if (N < 26)
        {
            if (sumOfDigits(N) % 2 == 0)
            {
                int firstHalf = (N + 1)/2;
                int secondHalf = (N - 1)/2;
                for (int i = 0; i < firstHalf; i++)
                {
                    cout<<string[i];
                }
                
                for (int i = secondHalf - 1; i >= 0; i--)
                {
                    cout<<reversedString[i];
                }
            }
            else{
                int firstHalf = (N - 1)/2;
                int secondHalf = (N + 1)/2;
                for (int i = 0; i < firstHalf; i++)
                {
                    cout<<string[i];
                }
                
                for (int i = secondHalf - 1; i >= 0 ; i--)
                {
                    cout<<reversedString[i];
                }
            }
            
        }
        else{
            if (sumOfDigits(N) % 2 == 0)
            {
                int one_cycle = N / 26;
                int firstHalf = (N - (one_cycle * 26) + 1)/2;
                int secondHalf = (N - (one_cycle * 26) - 1)/2;
                for (int j = 0; j < one_cycle; j++)
                {
                    for (int i = 0; i < (int)strlen(string); i++)
                    {
                        cout<<string[i];
                    }                    
                }
                for (int i = 0; i < firstHalf; i++)
                {
                    cout<<string[i];
                }
                
                for (int i = secondHalf - 1; i >= 0; i--)
                {
                    cout<<reversedString[i];
                }
            }
            else{
                int one_cycle = N / 26;
                int firstHalf = (N - (one_cycle * 26) - 1)/2;
                int secondHalf = (N - (one_cycle * 26) + 1)/2;
                for (int j = 0; j < one_cycle; j++)
                {
                    for (int i = 0; i < (int)strlen(string); i++)
                    {
                        cout<<string[i];
                    }                    
                }
                for (int i = 0; i < firstHalf; i++)
                {
                    cout<<string[i];
                }
                
                for (int i = secondHalf - 1; i >= 0 ; i--)
                {
                    cout<<reversedString[i];
                }
            }
        }
    }

    return 0;
}
*/

/*** Palindrome ***/
/*
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int palindrome(char string[])
{
    int low = 0;
    int high = (int)strlen(string) - 1;
    for (int i = 0; i < (int)strlen(string); i++)
    {
        if (string[low++] != string[high--])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char string[100];
    cout<<"enter the string: "<<endl;
    cin>>string;
    cout<<palindrome(string);
    return 0;
}
*/

/*** Sum of the array elements ***/
/*
#include<bits/stdc++.h>
using namespace std;

int arr[1000*1000*100];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    
    cout<<"Sum is: "<<sum;
    return 0;
}
*/

/*** Missing number ***/
/*
#include<bits/stdc++.h>
using namespace std;

int missingNumber(int A[], int N)
{
    int sum = N * (N + 1) / 2;
    int arrSum = 0;
    for (int i = 0; i < N - 1; i++)
    {
        arrSum += A[i];
    }
    
    return sum - arrSum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N = 5, arr[] = {1, 2, 4, 5};
    
    cout<<missingNumber(arr, N);
    return 0;
}
*/

/**** Adjacency matrix ****/
/*
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int v;
    cout<<"enter number of vertices: "<<endl;
    cin>>v;
    int vertices[v][v];
    
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            vertices[i][j] = 0;
        }
    }
    
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (vertices[i][j] != 0)
            {
                cout<<i<<" and "<<j<<" connected..."<<endl;
            }
            else{
                cout<<"enter value "<<i<<" and "<<j<<endl;
                cin>>vertices[i][j];
                vertices[j][i] = vertices[i][j];
            }
            
        }
    }
    
    for(int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout<<vertices[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
*/

/**** Missing number using XOR method****/
/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[5] = {1, 2, 4, 5, 6};
    int x1 = arr[0]; // we are starting with the first element 
    int x2 = 1; // initializing x2 as 1 because it is the array of elements which all the elements are present
    
    for (int i = 1; i < 5-1; i++)
    {
        x1 = x1 ^ arr[i];
    }
    
    for (int i = 2; i < 5 + 1; i++)
    {
        x2 = x2 ^ i;
    }
    
    cout<<"Missing number is: "<<(x1 ^ x2);
    
    return 0;
}
*/

/*** Minimum and maximum in an array ***/ 
/*
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct Pair {
  int min;
  int max;
};

struct Pair min_max(int arr[], int n)
{
    struct Pair storage;
    if (n == 1)
    {
        storage.max = arr[0];
        storage.min = arr[0];
        return storage;
    }
    else if (arr[0] > arr[1])
    {
        storage.max = arr[0];
        storage.min = arr[1];
    }
    else{
        storage.max = arr[1];
        storage.min = arr[0];
    }
    
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > storage.max)
        {
            storage.max = arr[i];
        }
        else if (arr[i] < storage.min){
            storage.min = arr[i];
        }
    }
    
    return storage;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int array[] ={ 1000, 11, 445, 1, 330, 3000 }, n = sizeof(array)/sizeof(array[0]);
    struct Pair result = min_max(array, n);
    
    cout<<"The maximum element is: "<<result.max<<endl;
    cout<<"The minimum element is: "<<result.min<<endl;

    return 0;
}
*/

/**** Minimum and Maximum element using Tournament method ****/
/*
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct Pair {
  int max;
int min;  
};

struct Pair Min_Max(int arr[], int low, int high)
{
    struct Pair storage, left, right;
    int mid;
    if (low == high)
    {
        storage.max = arr[low];
        storage.min = arr[low];
        return storage;
    }
    
    if(high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            storage.max = arr[low];
            storage.min = arr[high];
        }
        else{
            storage.min = arr[low];
            storage.max = arr[high];
        }
        return storage;
    }
    
    mid = low + (high - low)/2;
    left = Min_Max(arr, low, mid);
    right = Min_Max(arr, mid+1, high);
    
    if (left.min > right.min)
    {
        storage.min = right.min;
    }
    else{
        storage.min = left.min;
    }
    
    if (left.max > right.max)
    {
        storage.max = left.max;
    }
    
    else{
        storage.max = right.max;
    }
    
    return storage;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int array[] ={12, 34}, n = sizeof(array)/sizeof(array[0]);
    struct Pair result = Min_Max(array, 0, n - 1);
    
    cout<<"The maximum element is: "<<result.max<<endl;
    cout<<"The minimum element is: "<<result.min<<endl;

    return 0;
}
*/


/*** Float and precision ***/
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<< "floor: "<<floor(2.55) <<endl; // returns the closest integer lesser than the given value...
    cout<< "trunc: "<< trunc(3.434341) <<endl; // return the integer value by ignoring the decimal value...
    cout<< "Lesser than the integer: "
    <<round(5.4) <<endl<< "Greater than the integer: "
    <<round(5.5) << endl; // returns integer value based on the decimal...
    cout<< "ceil: " << ceil(4.3)<<endl; // returns the integer greater than the given value...
    cout<< "Set precision ( use fixed keyword before ): "<<fixed<<setprecision(3)<< double(3.4242342) <<endl;
    return 0;
}
*/

/**** Prefix sum array ****/
/*
#include<bits/stdc++.h>
using namespace std;

void toCalc(int array[], int n)
{
      for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                array[i] = array[i];
            }
            else{
                array[i] = array[i - 1] + array[i];
            }
            
        }
  }  


int main()
{
    int array[5] = {1, 2, 3, 4, 5}, n = sizeof(array)/sizeof(array[0]);
    
    toCalc(array, n);
    
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}
*/

/**** Prefix application ****/
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    
    
    
    return 0;
}
*/

/**** String Matching problem ****/
/*
#include<bits/stdc++.h>
using namespace std;

void stringMatching(string t, string p)
{
    int n = t.length();
    int m = p.length();
    int count = 0;
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (t[i + j] != p[j])
            {
                break;
            }
        }
        
        if (j == m)
        {
            cout<<"Pattern occurs at "<<i<<endl;
            count++;
        }
    }
    
    if (count){
        cout<<"Pattern exists...."<<endl;
        cout<<"Pattern repeats for "<<count<<" times."<<endl;
    }
    else{
        cout<<"Pattern does not exists."<<endl;
    }
}

int main()
{
    string text = "AABAAABABBBAABA";
    string pattern = "GHJ";
    stringMatching(text, pattern);
    return 0;
}
*/

///--- Fractional Knapsack ---///
/*
#include<bits/stdc++.h>
using namespace std;

struct items{
    int weight;
    int profit;
    items(int weight, int profit)
    {
        this -> weight = weight;
        this -> profit = profit;
    }
};

bool comparison(struct items w, struct items p)
{
    double r1 = (double)w.profit / (double)w.weight;
    double r2 = (double)p.profit / (double)p.weight;
    return r1 > r2;
}

int fractionalKnapsack(struct items arr[], int W, int n)
{
    sort(arr, arr + n, comparison);
    
    double maxWeight = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i].weight <= W)
        {
            W -= arr[i].weight;
            maxWeight += arr[i].profit;
        }
        else{
            maxWeight += arr[i].profit * ((double) W/ (double)arr[i].weight);
            break;
        }
    }
    
    return maxWeight;
    
}

int main()
{
    int W = 50;
    
    items arr[] = {{10, 60}, {20, 100}, {30, 120}};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout<<"Maximum weight obtained is "<<fractionalKnapsack(arr, W, n)<<endl;
    return 0;
}
*/

///--- Disjoint set union ---/// 
/*
#include <bits/stdc++.h>
using namespace std;

int parent[100000];
int rank[100000];

void makeset(int n){
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
}

int findparent(int node)
{
    if (node == parent[node])
    {
        return node;
    }
    
    // for path compression 
    return parent[node] = findparent(parent[node]);
}

void unionFunc(int u, int v)
{
    u = findparent(u);
    v = findparent(v);
    
   if (u != v)
        {
            if (rank[u] < rank[v])
            {
                parent[u] = v;
                rank[v] += rank[u];
            }
            
            else
            {
                parent[v] = u;
                rank[u] += rank[v];
            }
        }
            
        }
}

int main()
{
    int u, v;
    makeset(4);
    
    unionFunc(0, 1);
    unionFunc(1, 3);
    unionFunc(2, 3);
    unionFunc(2, 0);
    unionFunc(0, 3);
    
    if (find(2) != find(3))
    {
        cout<<"Different component"<<endl;
    }
    else{
        cout<<"Same component"<<endl;
    }
    return 0;
}
*/