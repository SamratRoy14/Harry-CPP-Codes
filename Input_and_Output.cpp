#include<iostream>
using namespace std;


int main(){

int num1, num2 ;
cout<<"enter the value of num1 :\n" ;//'<<'This is called Insertion operator//
cin>>num1 ;// >> this is called Extraction operator//

 cout<<"enter the value of num2 :\n" ;//'<<'This is called Insertion operator//
 cin>>num2; // >> this is called Extraction operator//

 cout<<num1+num2;
return 0;
}


#include <iostream>
int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 , v2 ;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}