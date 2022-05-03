#include<iostream>
using namespace std;

int c=45;

int main(){

       // ****************Built in data types*********************

// int a,b,c ;
 
// cout<< "Enter the value of a"<<endl;
// cin>>a;

// cout<< "Enter the value of b"<<endl;
// cin>>b;
// c=a+b;
// cout<<"the sum value of c is " <<c <<endl;
// cout<<"the global value of c is " <<::c <<endl;
// :: is called Scope resolution operator which helps us to put the global variable

        // ************Float,Double,Long double literals********************

// float e=43.4;
// long double g=43.4;

// cout<< "The value of e is "<<e<<endl;
// cout<< "The value of g is "<<g<<endl;

// cout<<"The size of 43.4 is " <<sizeof(43.4)<<endl;
// cout<<"The size of 43.4f is " <<sizeof(43.4f)<<endl;
// cout<<"The size of 43.4F is " <<sizeof(43.4F)<<endl;
// cout<<"The size of 43.4l is " <<sizeof(43.4l)<<endl;
// cout<<"The size of 43.4L is " <<sizeof(43.4L)<<endl;

          // *****************Reference Variable*******************

//   Samrat Roy---> Jhonti---> Ron---> Freddie 
// float x= 455;
// float & y=x;
// cout<<x<<endl;
// cout<<y<<endl;

           // ***************** Typecasting***************
int a= 45;
float b=56.7; 
cout<<"The value of a is "<<(float)a<<endl;
cout<<"The value of a is "<<float(a)<<endl;

cout<<"The value of b is "<<(int)b<<endl;
cout<<"The value of b is "<<int(b)<<endl;

cout<<"The value of b is "<<(float)b<<endl;
int c = int(b);
cout<<"The expression is "<<a+b<<endl;
cout<<"The expression is "<<a+float(b)<<endl;
cout<<"The expression is "<<a+(float)b<<endl;

cout<<"The expression is "<<a+(int)b<<endl;
cout<<"The expression is "<<a+int(b)<<endl;


    return 0;
}