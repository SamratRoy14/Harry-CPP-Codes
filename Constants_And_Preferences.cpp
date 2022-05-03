#include<iostream>
 #include<iomanip> //A header file to add setw
using namespace std;

int main(){

// int a=34 ;
// cout<<" The value of a is " <<a<<endl;

//  a=45;
// cout<<"The value of a is "<<a<<endl;
 
//  ***********Constants in C++*************
//  const int a=34 ;
//  const float b=34.5;
// cout<<" The value of a is " <<a<<endl;
// cout<<" The value of b is " <<b<<endl;

// a=45;---->You will get an error because a is a constant
// b=45.5;--->You will get an error because b also is a constant
// cout<<"The value of a is "<<a<<endl;
// cout<<"The value of b is "<<b<<endl;

// ***********Manipulators(Helps us to format data display)*****************
// int a=34, b=456, c=7689;
// cout<<"The value of a is " <<a<<endl;
// cout<<"The value of b is " <<b<<endl;
// cout<<"The value of c is " <<c<<endl;

// cout<<"The value of a is " <<setw(4)<<a<<endl;
// cout<<"The value of b is " <<setw(4)<<b<<endl;
// cout<<"The value of c is " <<setw(4)<<c<<endl;

// ************Operator preference*************

int a=4,b=5;
// int c=(a*b)+5;
int c=(((((a*b)+5)-56)+67)-76); 

    return 0;
}


