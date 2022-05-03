#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 4; i++)
    // {  
    //     if(i==2)
    //     break;
    //     cout<<i<<endl;
        // The programme will stop when the if condition will become true.
        // In this case the programme will print only 0,1 and 2.
    // }

    for (int i = 0; i < 10; i++)
    {
        
        if(i==2){
        continue;
       }
       cout<<i<<endl;
        // The programme will stop when the 'if condition' will become true and then start again
        // In this case the programme will print only 0,1 then stop at 2 after that continue at 3 and so on
    }
   return 0;
}