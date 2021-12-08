/*----control statement----*/
//#include <iostream>
//using namespace std;
//int main()
//{
//    for (int n = 10; n > 0; n--)
//    {
//        cout<< n << "\n";
//        if (n ==3)
//        {
//            cout<<"countdown aborted."<<"\n";
//            break;
//        }
//    }
//    
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int a = 100;
//class A
//{
//    int a;
//public:
//    void fun(){
//        a+=::a;
//        cout<<a<<endl;
//    }
//    
//};
//int main()
//{
//    A a1;
//    a1.fun();
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
// 
//void towerOfHanoi(int n, char from_rod,
//                    char to_rod, char aux_rod) 
//{ 
//    if (n == 1) 
//    { 
//        cout << "Move disk 1 from rod " << from_rod << 
//                            " to rod " << to_rod<<endl; 
//        return; 
//    } 
//    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod); 
//    cout << "Move disk " << n << " from rod " << from_rod <<
//                                " to rod " << to_rod << endl; 
//    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); 
//} 
// 
//// Driver code
//int main() 
//{ 
//    int n = 3; // Number of disks 
//    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods 
//    return 0; 
//} 

//#include<iostream>
//using namespace std;
//int main()
//{
//    int a[5];
//    cout<<"Enter numbers."<<endl;
//    for (int i = 0; i < 5; i++)
//    {
//        cin>>a[i];
//        if (a[i] < 0)
//        {
//            continue;
//        }
//    }
//    cout<<"the numbers are "<<endl;
//    for (int i = 0; i < 5; i++)
//    {
//        cout<<a[i]<<endl;
//    }
//   
//    return 0;
//}

//#include<iostream>
//using namespace std;
//class demo
//{
//private:
//    static int a;
//public:
//    static int ok()
//    {
//        cout<<"Enter the value of a."<<endl;
//        cin>>a;
//        cout<<"Value of a: "<<a<<endl;
//    }
//};
//int demo::a;
//int main()
//{
//    demo a;
//    a.ok();
//    return 0;
//}

//#include<iostream>
//using namespace std;
//class values
//{
//    int a;
//public:
//    void number_in()
//    {
//        cout<<"enter a number."<<endl;
//        cin>>a;
//    }
//    int squ_num()
//    {
//        return a*a;
//    }
//    int cube_num()
//    {
//        return a*a*a;
//    }
//    void dis_num()
//    {
//        int sqr = squ_num();
//        int cub =  cube_num();
//        cout<<"the square of the nuber "<<a<<"is "<<sqr<<endl;
//        cout<<"the cube of the nuber "<<a<<"is "<<cub<<endl;
//    }
//    
//};
//int main()
//{
//    values print;
//    print.number_in();
//    print.dis_num();
//    return 0;
//}

//#include<iostream>
//using namespace std;
//class given
//{
//private:
//    int length;
//    int breadth;
//    int height;
//    
//public:
//void data(int len, int brdth, int hgth)
//{
//    length = len;
//    breadth = brdth;
//    height = hgth;
//}
//int area()
//{
//    return length*height;
//}
//int volume()
//{
//    return length*breadth*height;
//}
//     
//};
//int main()
//{
//    given calc;
//    calc.data(20, 40, 50);
//    cout<<"Area: "<<calc.area()<<endl;
//    cout<<"Volume: "<<calc.volume()<<endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//class calculate
//{
//private:
//    int length;
//    int breadth; 
//    int height;
//
//public:
//    void data(int len, int brth, int hght)
//    {
//        length = len;
//        breadth = brth;
//        height = hght;
//    }
//    int area()
//    {
//        return length * height;
//    }
//    int volume()
//    {
//        return length * breadth * height;
//    }
//};
//
//int main()
//{
//    calculate values;
//    values.data(30, 40, 50);
//    cout<<"Area: "<<values.area()<<endl;
//    cout<<"Volume: "<<values.volume()<<endl;
//    
//    return 0;
//}


//#include<iostream>
//using namespace std;
//class Line
//{
//public:
//    void len_set(double length);
//    double len_get();
//    Line();
//private:
//    double length;
//};
//Line::Line()
//{
//    cout<<"object is being created."<<endl;
//}
//void Line::len_set(double len)
//{
//    length = len;
//}
//double Line::len_get()
//{
//    return length;
//}
//int main()
//{
//    Line line;
//    line.len_set(10.0);
//    cout<<"the lenght of the line is: "<<line.len_get()<<endl;
//    return 0;
//}
//
//#include<iostream>
//using namespace std;
//class shape
//{
//public:
//    void Width(int w)
//    {
//        width = w;
//    }
//    void Height(int h)
//    {
//        height = h;
//    }
//protected:
//    int height;
//    int width;
//};
//class Rectangle:public shape
//{
//public:
//    int area()
//    {
//        return (width * height);
//    }
//};
//
//int main()
//{
//    Rectangle recshape;
//    recshape.Width(4);
//    recshape.Height(5);
//    
//    cout<<"Area: "<<recshape.area()<<endl;
//    return 0;
//}

//#include <iostream>
// 
//using namespace std;
//
//// Base class
//class Shape {
//   public:
//      void setWidth(int w) {
//         width = w;
//      }
//      void setHeight(int h) {
//         height = h;
//      }
//      
//   protected:
//      int width;
//      int height;
//};
//
//// Derived class
//class Rectangle: public Shape {
//   public:
//      int getArea() { 
//         return (width * height); 
//      }
//};
//
//int main(void) {
//   Rectangle Rect;
// 
//   Rect.setWidth(5);
//   Rect.setHeight(7);
//
//   // Print the area of the object.
//   cout << "Total area: " << Rect.getArea() << endl;
//
//   return 0;
//}

/*======STRUCTURE: some example=======*/
//#include <iostream>
//using namespace std;
//struct Person
//{
//char name[50];
//int age;
//float salary;
//};
//int main()
//{
//Person p1;
//cout << "Enter Full name: ";
//cin>> p1.name;
//
//cout << "Enter age: ";
//cin >> p1.age;
//cout << "Enter salary: ";
//cin >> p1.salary;
//cout << "Displaying Information." << endl;
//cout << "Name: " <<
//p1.name << endl;
//cout <<"Age: " << p1.age << endl;
//cout << "Salary: " << p1.salary << endl;
//return 0;
//}
//
//#include<iostream>
//using namespace std;
//int a = 20;
//
//class A{
//public:
//    int a;
//    
//    void fun()
//    {
//        a = 2;
//        a += ::a;
//        cout << a;
//    }
//    
//};
//
//int main()
//{
//    A a1;
//    a1.fun();
//    return 0;
//}

/*====Power of a number====*/

//#include<iostream>
//using namespace std;
//int main()
//{
//    int base, power, result = 1;
//    
//    cout <<  "enter base: "<<endl;
//    cin>> base;
//    cout << "enter power: "<< endl;
//    cin>> power;
//    cout << base<< "^"<< power << "=";
//    while (power != 0)
//    {
//        result *= base;
//        --power;
//    }
//    
//    cout << result << endl; 
//    
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    cout<<"hello world"<<endl;
//    return 0;
//}

// static_cast<type> is used as the type converter from int to double to float or vise vesa

