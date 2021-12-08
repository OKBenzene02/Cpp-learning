#include <iostream>
int main()
{
    int num;
    std::cout<<"Please choose a number between 1 to 10"<<std::endl;
    
    std::cin>>num;
    if (num < 10 && num > 0)
    {
        std::cout<<"exactly this is my fav number"<<std::endl;
    }
    else 
    {
        std::cout<<"no that is not my fav number"<<std::endl;
    }
    
    //std::cout<<"so this is going gud\n";
    
    return 0;
    
}