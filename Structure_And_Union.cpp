#include<iostream>
using namespace std;

typedef struct Employee{    /* typedef ,ep is a kind of shortcut which is used to replace the word struct employee*/
    /* data */
    int eID;
    char favChar;
    float salary;
}ep;
union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};


int main(){
   
    union money m1;
     m1.rice=10;
    //  m1.pounds=22.40;  ---> Only one at a time  
    //  m1.car='H';
    cout<<"The value for rice is "<<m1.rice<<endl;
    // cout<<"The value for car is "<<m1.car<<endl;
    // cout<<"The value for pound is "<<m1.pounds<<endl;

     struct Employee samrat;
    ep ujjal;
    // samrat.eID=1;
    // samrat.favChar='s';
    // samrat. salary=3000000;
    // cout<<"The eID of samrat is "<<samrat.eID<<endl;
    // cout<<"The favChar of samrat is "<<samrat.favChar<<endl;
    // cout<<"The salary of samrat is "<<samrat.salary<<endl;

    enum Meal {breakfast, lunch , dinner};
    // Meal m2=breakfast;
    Meal m2=lunch;
    cout<<(m2==0)<<endl; //-->Thats a false answer 
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    return 0;
}