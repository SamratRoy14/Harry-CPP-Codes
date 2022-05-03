#include <iostream>
using namespace std;

int main()
{

   // ***********LOOPS IN C++*************
   // There are three types of loops in C++:
   // 1.For Loop
   // 2.While Loop
   // 3.Do-while Loop

   //          1. For loops in C++:
   //( An example --> print all integers from 0 to 100 using for loop)
   // int i=1;
   // cout<<i;
   // i++;............

   // ***Syntax for for loop***
   // for (initialization;condition;updation){
   //     loop body(C++ code)
   // }

   // for (int i = 0; i < 10 ; i++)
   // {    cout<<i<<endl;
   //    }
   //
   //  ***syntax for infinite for loop****
   // for (int i=1; 1<= 10;i++){
   //      cout<<i<<endl;
   //  }

   //          2.While loops in C++ :
   // Syntax:
   // while(condition){
   //     C++ statements
   // }

   // //  Printing 1 to 40 using while loop
   // int i=1;
   // while(i<=40){
   //     cout<<i<<endl;
   //     i++;
   // }

   // ***syntax for infinite for loop****
   //  int i=1;
   // while(true){
   //     cout<<i<<endl;
   //     i++;
   // }

   //          3. Do While loops in C++ :
   //Syntax:
   // do {
   //     C++ statements
   // } while(condition);

   // //  Printing 1 to 40 using do while loop
   //  int i=1;
   // do{
   //  cout<<i<<endl;
   //   i++;
   //  }while(i<=40);

   // int i=1;
   // do {
   //      cout<<i<<endl;
   //      i++;
   //  }while(false);  ---> It will run just for one time then it will give false

   //DO A HOMEWORK :  1..WRITE A MULTIPLICATION TABLE USING LOOP
   //                 2..Write a program that uses a while  loop to sum the numbers from 50 to 100.

   // //1.
   // int b = 6;
   // for (int i = 1; i <= 10; i++)
   // {
   //    cout << b << "x" << i << "=" << (i * b) << endl;
   // }
   // or

   // int i = 0;
   // int n = 6;
   // do
   // {
   //     cout << n << " x " << i << " = " << n*i << endl;
   //     i++;
   // } while (i <= 10);

   // 2.
   int i = 0;
   int sum = 50;
   while (i <= 100)
   {
      sum = sum + i;
      i++;
   }
   cout << "The sum of the numbers from 50 to 100 is  " << sum << endl;

   return 0;
}
