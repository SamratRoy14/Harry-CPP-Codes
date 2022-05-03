// There are two types of header files:
// 1. System header files:It is comes with the compiler -
#include<iostream>
/* 2. User defined header files:It is written by the programmer-
#include"this.h"---> This will produce an error if "this.h" is not 
  present in the current directory*/

using namespace std;

int main(){

cout<<"This is hello world programme ."<<endl;
    int a=4, b =5;
  
    cout<<"Operators in C++ :"<<endl;
    cout<<"These following are the types of operators -"<<endl;
    // 1. Arithmetic Operator : 
    cout<<"Following are the arithmatic operators"<<endl;
    cout<< "The value of a+b is "<<a+b<<endl;    
    cout<< "The value of a-b is "<<a-b<<endl;    
    cout<< "The value of a*b is "<<a*b<<endl;    
    cout<< "The value of a/b is "<<a/b<<endl;
    cout<< "The value of a%b is "<<a%b<<endl;
    cout<< "The value of a++ is "<<a++<<endl;    
    cout<< "The value of a-- is "<<a--<<endl;    
    cout<< "The value of ++a is "<<++a<<endl;    
    cout<< "The value of --a is "<<--a<<endl;
// 2. Assignment operators : Used to assing value to variables--
//  int a= 4 b=5 
//  char letter='f'
//  float pi=3.14
//  double f=3.177597
//  bool is true=0
//  3.Comparision operators :
cout<<"Following are the Comparision operator -"<<endl;
 cout<<" The value of a==b is "<<(a==b)<<endl;
 cout<<" The value of a>b is "<<(a>b)<<endl;
 cout<<" The value of a<b is "<<(a<b)<<endl;
 cout<<" The value of a<=b is "<<(a<=b)<<endl;
 cout<<" The value of a>=b is "<<(a>=b)<<endl;
 cout<<" The value of a!=b is "<<(a!=b)<<endl;
//  3.Logical operators :
cout<<"Following are the Logical operator -"<<endl;
 cout<<" The value of this logical and operator ((a==b) && (a<=b)) is "<<((a==b)&&(a<=b))<<endl;
 cout<<" The value of logical or operator ((a=b) or (a<=b)) is "<<((a==b)||(a<=b))<<endl;
 cout<<" The value of  logical not operator (!(a=b)) is "<<(!(a==b))<<endl;
    return 0;
}