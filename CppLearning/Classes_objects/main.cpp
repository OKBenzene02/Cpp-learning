/*
#include<iostream>
using namespace std;
class Liyubhai{
public:
    void details()
    {
        cout<<"Hello, yeh mera andaz hai seekhne ka."<<endl;
    }
    
    
};
int main()
{
    Liyubhai access;
    access.details();
    return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;

class Example{
public:
    void details(string x)
    {
        name = x;
    }
    string printing()
    {
        return name;
    }
private:
    string name;
};
int main()
{
    Example a;
    a.details("hello ye raha hamara string.");
    cout<<a.printing()<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

class Sum{
public:
    void add(int x, int y)
    {
        cout << "sum: "<< x + y;
    }
};
int main()
{
    Sum a;
    a.add(3, 7);    
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

class KuchBhi{
public:
    void Try(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void Output()
    {
        cout << "Arithimatic Operation: "<< (x + y) * z;
    }
private:
    int x, y, z;
};
int main()
{
    KuchBhi lo;
    lo.Try(3, 2, 5);
    lo.Output();
    return 0;
}
*/

#include<iostream>
using namespace std;

class Different{
public:
    void assign(int x, int y, int z)
    {
        length = x;
        breadth = y;
        height = z;
    }
    void area()
    {
        cout <<"Area: "<< length * breadth << endl;
    }
    void volume()
    {
        cout << "Volume: "<< length*breadth*height<< endl;
    }
private:
    int length, breadth, height;
};
int main()
{
    Different mereObjects;
    mereObjects.assign(2, 3, 4);
    mereObjects.area();
    mereObjects.volume();
    return 0;
}