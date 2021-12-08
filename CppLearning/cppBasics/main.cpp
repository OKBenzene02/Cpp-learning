/*
#include <iostream>
using namespace std;
int main()
{
    cout<<"hello"<<"world!"<<endl;
    cout<<"hello";
    cout<<" world!"<<endl;
    cout <<"hello";
    cout<<"world"<<"works"<<endl;
    cout<<"hello\nOut\nthere\n"<<endl;
    
    int  n1, n2;
    cout<<"enter a number"<<endl;
    cin>> n1 >> n2;
    
    cout<< "numbers are "<< n1 << " and " <<n2 << endl;
    double a;
    cout<<"enter a decimal number: "<<endl;
    cin>>a;
    cout<<"the number " << n2 << "and decimal "<< a;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
        if (i == 1)
        {
            cout<<"one"<<endl;
        }
        if (i == 2)
        {
            cout<<"two"<<endl;
        }
        if (i == 3)
        {
            cout<<"three"<<endl;
        }
        if (i == 4)
        {
            cout<<"four"<<endl;
        }
        if (i == 5)
        {
            cout<<"five"<<endl;
        }
        if (i == 6)
        {
            cout<<"six"<<endl;
        }
        if (i == 7)
        {
            cout<<"seven"<<endl;
        }
        if (i == 8)
        {
            cout<<"eight"<<endl;
        }
        if (i == 9)
        {
            cout<<"nine"<<endl;
        }
        else if (i > 9)
        {
             if (i % 2 == 0)
            {
                cout<<"even"<<endl;
            }
            else
            {
                cout<<"odd"<<endl;
            }
        }
        
    }
    
    return 0;
}
*/
/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int greatest(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        return a;
    }
    else if (b > a && b > c && b > d)
    {
        return b;
    }
    else if (c > a && c > b && c > d)
    {
        return c;
    }
    else 
    {
        return d;
    }
}
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    greatest(a, b, c, d);
    
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

void calci(int *a, int *b)
{
    int p, q;
    p = *a + *b;
    cout<<p<<endl;
    q = *a - *b;
    if (q > 0)
    {
        cout<<q<<endl;
    }
    else
    {
        cout<<(-1)*(q)<<endl;
    }
    return;
}

int main()
{
    int x, y;
    cin>>x>>y;
    calci(&x, &y);
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    for (int i = N - 1; i>= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

