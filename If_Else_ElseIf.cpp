#include<iostream>
using namespace std;

int main(){
cout<< "This is tutorial 9"<<endl;

int age;
cout<<"Tell me your age "<<endl;
cin>>age;

// **************Selection Control Structures:If ,Else if ,Else ladder***********************
if ((age<18) &&(age>0)){
    cout<<"You are not allowed to the party"<<endl;
}
else if (age<1){
    cout<<"You are not even born"<<endl;
}
else if (age==18){
     cout<<"You are a kid use your kid pass"<<endl;
}  
else{
    cout<<"You are allowed to this party "<<endl;
} 

// ****************Selection Control Structures: Switch case statements***************

// switch (age)
// {
// case 18:
//      cout<<"Your name is Samrat "<<endl;
//     break;
// case 22 :
//      cout<<"Your name is Sourik "<<endl;
//     break;
// case 2:
//      cout<<"Your name is Anish "<<endl;
//     break;
//  case 89:
//      cout<<"Your name is UJjal "<<endl;
//     break;
// default:
// cout<<"No special cases"<<endl;
//     break;
// }
  return 0;
}