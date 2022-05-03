#include<iostream>
using namespace std;

 inline int product(int a,int b){
    //  Do not use the below lines with  inline functions
    //  static int c=0; // This executes only once 
    //  c=c+1;          // Next time this function runs the value of c will be retained

    return a*b;
}

float moneyRecieved( int currentMoney , float factor=1.04){
    return currentMoney* factor;
}
// int strlen( const char *p){

// }
int main(){
    // int a , b ;
    // cout<< "The value of a and b is "<<endl;
    // cin>>a>>b;
    // cout<<"The product is "<<product(a,b)<<endl;
    // cout<<"The product is "<<product(a,b)<<endl;
    // cout<<"The product is "<<product(a,b)<<endl;
    // cout<<"The product is "<<product(a,b)<<endl;
   int  money = 100000;
    cout<<"If you have "<<money<< "Rs in your bank account you will get "<<moneyRecieved(money)<<" after 1 year ."<<endl;
    cout<<"If you  a VIP and if you have "<<money<< "Rs in your bank account you will get "<<moneyRecieved(money ,1.1) <<" after 1 year ."<<endl;

    return 0;
}

