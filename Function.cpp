#include<iostream>
using namespace std;

// int sum( int a, int b){
//     int c= a+b;
//     return c;
//}

// Function Prototype : 
// type function name(arguments) --> structure

  int sum(int a , int b);  // ---> Acceptable
// int sum(int , int );   //---> Acceptable
//int sum(int a , b) ;   //--->  Not Acceptable

//void greet(void); //--->Acceptable
void greet();      //--->Aceptable
int main(){
    int num1 ,num2;
    cout<<"Enter the value of first number "<<endl;
    cin>>num1;
     cout<<"Enter the value of second number "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    //num 1 and num 2 are Actual parameters
    greet();
    return 0;
}
int sum( int a, int b){
    /*Formal parameters a and b will be taking values from actual parameters 
    num 1 and num2 */
    /* Actual parameters and Formal parameters name can be same */
    int c= a+b;       // ==> Won't work until there is a function prototype
    return c;}

    void greet(){
        cout<<"Have a nice day"<<endl;
    }