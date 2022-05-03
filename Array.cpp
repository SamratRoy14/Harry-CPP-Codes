#include<iostream>
using namespace std;

int main(){
     //*********Array Example*************
     int marks[] = {423,442,546,489} ;
    // cout<<" These are the marks:"<<endl;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    int Mathmarks[] = {56,75,82,91};
    // cout<<"These are the Mathmarks:"<<endl;

    // cout<<Mathmarks[0]<<endl;
    // cout<<Mathmarks[1]<<endl;
    //  Mathmarks[2]=100 ; //---> We can change the value of an array
    // cout<<Mathmarks[2]<<endl;
    // cout<<Mathmarks[3]<<endl;

    // Do this using for loop:
//     for (int i = 0; i < 4 ; i++)
// {
//     cout<<"The value of Mathmark "<<i<< " is "<<Mathmarks[i]<<endl;

// }
    // Do this using while loop:
    // int i=0;
    // while (i<4)
    // {
    //   cout<<"The value of Mathmark "<<i<< " is "<<Mathmarks[i]<<endl;
    //   i++;
    // }

    //Do this using do-while loop:
    // int i=0 ;
    // do
    // {
    //    cout<<"The value of Mathmark "<<i<< " is "<<Mathmarks[i]<<endl;
    //    i++;
    // } while (i<4);
    
    //Pointers and Arrays:
    int* p=marks;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;


    return 0;
}