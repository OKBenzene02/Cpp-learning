/*
#include<iostream>
using namespace std;
void Toh(int n, int A, int B, int C)
{
    if (n > 0)
    {
        Toh(n - 1, A, C, B);
        cout<<"Move a disc from "<<A<<" to "<<C<<endl;
        Toh(n - 1, B, A, C);
    }   
}
int main()
{
    Toh(3, 1, 2, 3);
    return 0;
}
*/

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

