
//                   OOPs -clases and objects

//C++ initially called --> 'C with classes' by Stroustroup
//class ==> extension of structures (in C)
// structures had limitations
//                - members are public
//                - No methods
//classes ==> structures + more
//classes can have methods and properties
//classes can make few members as private & few as public
//structures in C++ are typedef
//You can declare objects along with the class declaration like this:
/*     class Employee{
                       class defination
                           } samart,sourik,ujjal; */
//samrat.salary =100000==> this makes no sense if salary is private

//                   Nesting of member functions
#include <iostream>
#include <string>

using namespace std;

class binary
{ //private:
    string s;   //This is a private number by default

public:
    void read(void);                 //Read the number 
    void chk_bin(void);             //Check the number if it's binary or not 
    void ones_compliment(void);    //Replace the 1 with 0 and the 0 with 1 
    void display(void);           //Display the number
};
void binary::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "This is not a binary number " << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0'){   
        (s.at(i)) = '1';
        }
        else{
         (s.at(i))='0';
        }
    }
}
    void binary :: display(void){
        cout<<"\nDisplaying the new binary number"<<endl;
        for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
         }
    }
    int main()
    {
        binary b;
        b.read();
        b.chk_bin();
        b.display();
        b.ones_compliment();
        b.display();
        return 0;
    }