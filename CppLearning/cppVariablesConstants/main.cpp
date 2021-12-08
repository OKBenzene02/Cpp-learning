//#include <iostream>
//using namespace std;
//int main()
//{
//    int area {0}, length {0}, width {0};
//    cout<<"length: "<<endl;
//    cin>> length;
//    cout<< "width: "<<endl;
//    cin>> width;
//    
//    area = length * width;
//    
//    cout<< "area: "<< area<< endl;
//    return 0;
//}

            /*premittive data types*/

//#include<iostream>
//using namespace std;
//int main()
//{
//    
    //----Integer types----
//    long int a {29085594};
//    cout<<a<<endl;
//    
//    long long b {123456789012345678};
//    cout<< b <<endl;
    
    //---doubleing points---
//    double a {2.30};
//    cout<<a<<endl;
//    
//    double pi {3.141735};
//    cout<<pi<<endl;
//    
//    long double b {2.7e+120};
//    cout<<b<<endl;

    //----boolean expressions----
//    bool a {false};
//    cout<< a <<endl;
    //----overflow examples----
//      short a {1000};
//      short b {30000};
//      short sum {a + b};
//      cout<< "a: "<< a << endl << "b: "<< b << endl;
//      cout << "sum: "<< sum<<endl;
//    
//    return 0;
//}


/*   sizeof operator  */
//#include <iostream>
//#include <climits>
//using namespace std;
//int main()
//{
//    cout << "       size of the operators    "<< endl;
//    cout << "==================================="<< endl;
//    cout << "int: " << sizeof(int)<< "bytes"<< endl;
//    cout << "long long int: " << sizeof(long long int)<< "bytes"<< endl;
//    cout << "long int: " << sizeof(long int)<< "bytes"<< endl;
//    cout << "char : " << sizeof(char)<< "bytes"<< endl;
//    cout << "double: " << sizeof(double)<< "bytes"<< endl;
//    cout << "unsigned int: "<< sizeof(unsigned int)<< endl;
//    cout << "signed int: "<< sizeof(signed int)<< endl;
//    cout << "==================================="<< endl;
//    cout << "char ->  " << sizeof CHAR_MAX << endl;
//    cout << "short ->  " << sizeof SHRT_MAX << endl;
//    cout << "long ->  " << sizeof LONG_MAX << endl;
//    cout << "double ->  " << sizeof LLONG_MAX << endl;
//    cout << "int ->  " << sizeof INT_MAX << endl;
//    cout << "==================================="<< endl;
//    cout << "char ->  " << sizeof CHAR_MIN << endl;
//    cout << "short ->  " << sizeof SHRT_MIN << endl;
//    cout << "long ->  " << sizeof LONG_MIN<< endl;
//    cout << "double ->  " << sizeof LLONG_MIN << endl;
//    cout << "int ->  " << sizeof INT_MIN << endl;
//    return 0;
//}
//

/*literal constants*/
//#include <iostream>
//using namespace std;
//int main()
//{
//    cout<<"\t===ROOM CLEANING SERVICES==="<<endl;
//    cont double charges {30};
//    double sales_tax {0.06};
//    double total_tax;
//    int rooms;
//    
//    cout<<"Enter the number of rooms."<<endl;
//    cin>>rooms;
//    
//    cout<<"Price per room: "<<charges<<endl;
//    cout<<"Sales taxes: "<<sales_tax<<endl;
//    cout<<"cost: "<< (rooms* charges)<<endl;
//    total_tax = (rooms * sales_tax * charges);
//    
//    cout<<"Total: "<< total_tax<<endl;
//    
//    
//    
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    cout<<"\t==========ROOM CLEANING SERVICES==========\t"<<endl;
//    const double large_room {35};
//    const double small_room {30};
//    const double sales_taxes {0.06};
//    int largerooms {0};
//    int smallrooms {0};
//    
//    cout<<"Enter number of large rooms: "<<endl;
//    cin>> largerooms;
//    
//    cout<<"Enter number of small rooms: "<<endl;
//    cin>>smallrooms;
//    cout<<"=============================================================="<<endl;
//    cout<<"\tPrice for Large room: $"<< largerooms * large_room << endl;
//    cout<<"\tPrice for small room: $"<< smallrooms * small_room << endl;
//    cout<<"\tTax: "<<sales_taxes*100<<"%"<<endl;
//    cout<<"\tLarge room: "<< largerooms * large_room * sales_taxes<<endl;
//    cout<<"\tsmall room: "<< smallrooms * small_room * sales_taxes<<endl;
//    cout<<"\tTotal for large rooms: $"<< (largerooms * large_room) + (largerooms * large_room * sales_taxes)<<endl;
//    cout<<"\tTotal for small rooms: $"<< (smallrooms * small_room) + (smallrooms * small_room * sales_taxes)<< endl;
//    cout<<"=============================================================="<<endl;
//    return 0;
//}

/*=====fibonacci series=====*/
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, t1 = 0, t2 = 1, nextTerm = 0;
//    cout << "Enter the number of terms: " << endl;
//    cin >> n;
//    cout << "Fibonacci Series: ";
//    for (int i = 1; i <= n; ++i)
//    {
//    // Prints the first two terms.
//    if(i == 1)
//    {
//        cout << t1 << endl;
//        continue;
//    }
//    if(i == 2)
//    {
//        cout << t2 << endl;
//        continue;
//    }
//    nextTerm = t1 + t2;
//    t1 = t2;
//    t2 = nextTerm;
//    cout << nextTerm << endl;
//    }
//    return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//    int n1 = 0, n2 = 1, temp = 0, n;
//    cout << "Enter a number: " << endl;
//    cin >> n;
//    cout<< "----->FIBONACCI SERIES<-----"<<endl;
//    cout << n1<< endl;
//    cout << n2 << endl;
//    
//    for (int i = 3; i <= n; i++)
//    {
//        temp = n1 + n2;
//        n1 = n2;
//        n2 = temp;
//        cout << temp << endl;
//    }
//    return 0;
//}


//-----VECTORS-----
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    
    cout << "element at 0: " << vowels[0]<<endl;
    cout << "element at 1: " << vowels[1]<<endl;

    //vector <int> scores (3, 100); // all 3 elements have values 100.
    vector <int> scores {100, 2, 3};
    cout << "score 1: " << scores[0]<<endl;
    cout << "score 2: " << scores[1]<<endl;
    cout << "score 3: " << scores[2]<<endl;
    cout << "there are "<<scores.size()<< " elements" << endl;
    cout<< "enter 3 test scores: "<< endl;
    cin>> scores.at(0); // Replaces the entered value with the original value
    cin>> scores.at(1);
    cin>> scores.at(2);
    
    cout << "updated test scores: "<< endl;
    cout<< scores.at(0)<< endl;
    cout<< scores.at(1)<< endl;
    cout<< scores.at(2)<< endl;
    
    cout << "Adding test scores: "<< endl;
    int adding {0};
    cin>>adding;
    scores.push_back(adding);
    cout<<"enter one more number: "<<endl ;
    cin>> adding;
    scores.push_back(adding); // ADDs some extra elements entered by the user
    
    cout << "the added scores are: "<< endl;
    cout << scores.at(0)<<endl;
    cout << scores.at(1)<<endl;
    cout << scores.at(2)<<endl;
    cout << scores.at(3)<<endl;
    cout << scores.at(4)<<endl;
    return 0;
}

//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//    vector <int> vec1 {};
//    vector <int> vec2 {};
//    vec1.push_back(5);
//    vec1.push_back(6);
//    
//    cout<< "element-1: "<< vec1.at(0)<< endl;
//    cout<< "element-2: "<< vec1.at(1)<< endl;
//    cout<< "size is "<< vec1.size()<< endl;
//    
//    cout<< "=================================="<< endl;
//    
//    vec2.push_back(8);
//    vec2.push_back(7);
//    cout<< "element-1: "<< vec2.at(0)<< endl;
//    cout<< "element-2: "<< vec2.at(1)<< endl;
//    cout<< "size is "<< vec2.size()<< endl;
//    
//    cout<< "=================================="<< endl;
//    
//    vector <vector<int>> vector_2d;
//    vector_2d.push_back(vec1);
//    vector_2d.push_back(vec2);
//    
//    cout<< "vector"<< endl;
//    cout<< vector_2d.at(0).at(0) << "   "<< vector_2d.at(0).at(1)<<endl;
//    cout<< vector_2d.at(1).at(0) << "   "<< vector_2d.at(1).at(1)<<endl;
//    
//    vec1.at(0) = 1000;
//    cout<< vec1.at(0)<< endl;
//
//    return 0;
//}