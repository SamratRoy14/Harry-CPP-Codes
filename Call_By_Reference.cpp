#include<iostream>
using namespace std;

int sum(int a ,int b){
int c=a+b;
return c;
}
//This program will not swap x and y values we needs pointers for that
//  void swap(int a , int b){  //   temp a b
//    int temp = a;            //    4   4 5
//     a = b;                  //    4   5 5
//     b = temp;               //    4   5 4
// }

// //Call by reference using pointers:
// void swapPointer(int* a , int* b){
//    int temp = *a;
//     *a=*b ;          
//     *b = temp;             
// }

//Call by reference using C++ reference variables:
//int &
void swapReferencevar(int &a , int &b){
   int temp = a;
    a=b ;          
    b = temp;  
    //return a;            
}
int main(){
    //int a=4,b=5;
    int x=4,y=5;
   // cout<<"The sum  of a and b is " <<sum(a,b)<<endl;
   cout<<"The value of x is "<<x<<" the value of y is "<<y<<endl;
   //swap(x,y);This program will not swap x and y values we needs pointers for that..
   //swapPointer (&x,&y); This will swap a and b using pointer reference..
   swapReferencevar(x,y);
   //swapReferencevar(x,y)=76;
   cout<<"The value of x is "<<x<<" the value of y is "<<y<<endl;
    return 0;
}