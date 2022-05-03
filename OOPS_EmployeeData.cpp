#include <iostream>
using namespace std;

class Employee{
    int Id;
    static int counter;

public:
    void setData(void);
    // {
    //     cout << "Enter the Id of the employee " << endl;
    //     cin >> Id;
    // }

    void getData(void);
    // {
    //     cout << "The Id of this Employee is " << Id << " and his Employee number is " << counter + 1000 << endl;
    //     counter++;
    // }
    static void getCounter(void){
    cout<<"The value of counter is "<<counter<<endl;
    }
};
    int Employee ::counter=1000 ;// Default value is 0 
    
    void Employee:: setData(void){
   cout<<"Enter the Id of the employee "<<endl;
   cin>>Id;
   }
        void Employee:: getData(void){
    cout<<"The Id of this Employee is " << Id<< "and his Employee number is "<<counter<<endl;
    counter++;
   }       //  We can also do this inside the class function 

int main()
{
    // counter is the statric data member of class Employee
    Employee samrat, sourik, ujjal;
    // samrat.Id=1;
    // samrat.count=1; ==> Cannot do this as Id and count are private

    samrat.setData();
    samrat.getData();
    Employee::getCounter();

    sourik.setData();
    sourik.getData();
    Employee::getCounter();

    ujjal.setData();
    ujjal.getData();
    Employee::getCounter();
    return 0;
}