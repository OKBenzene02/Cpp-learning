 // static_cast<type> is used as the type converter from int to double to float or vise vesa
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    int total {};
//    int num1 {}, num2 {}, num3 {};
//    const int count {3};
//    cout<< "enter three integers"<<endl;
//    cin>> num1 >> num2 >> num3;
//    
//    total = num1 + num2 + num3;
//    
//    double average {0.0};
//    average = static_cast<double>(total) / count;
//    
//    cout<< "The three numbers were "<< num1<< num2<< num3<< endl;
//    cout<< "The sum of the three numebrs is "<< total << endl;
//    cout<< "The average is "<< average << endl;
//    
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    int num1 {}, num2 {};
//    bool res_if_equal {false};
//    bool res_not_equal {false};
////    cout << boolalpha;
//    res_if_equal = (num1 == num2);
//    res_not_equal = (num1 != num2);
//    cout << "num1: " <<endl;
//    cin >> num1;
//    cout << "num2: " << endl;
//    cin >> num2;
//    cout << "Two numbers are equal: " << res_if_equal<< endl;
//    cout << "Two numebrs are not equal: " <<res_not_equal<< endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    int cents {}, balance {}, dollar {}, quarter {}, nickel {}, dime {}, penny {};
//    const int dollar_value {100};
//    const int quarter_value {25};
//    const int nickels_value{5};
//    const int dime_value {10};
//    
//    cout<< "Please amount in cents: "<<endl;
//    cin>> cents;
//    
//    dollar = cents / dollar_value;
//    balance = cents - (dollar * dollar_value);
//    
//    quarter = balance / quarter_value;
//    balance -= (quarter * quarter_value);
//    
//    dime = balance / dime_value;
//    balance -= (dime * dime_value);
//    
//    nickel = balance / nickels_value;
//    balance -= (nickel * nickels_value);
//    
//    
//    penny = balance;
//    
//    
//    cout << "Dollar: "<< dollar<< endl;
//    cout<< "quater: "<< quarter<< endl;
//    cout << "dime: "<< nickel<< endl;
//    cout<< "nickels: "<< dime<< endl;
//    cout<< "penny: "<< penny<< endl;
//   
//    return 0;
//}

