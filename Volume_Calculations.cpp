#include<iostream>
using namespace std;

float sum(float a,int b){
     cout<<"by using 2 arguments is ";
     return a+b;
}
int sum(int a,int b,int c){
     cout<<"by using 3 arguments is ";
     return a+b+c;
}

//Calculate the volume of a cylinder :
double volume( double r, int h){
     return (3.14* r*r*h );
}
//Calculate the volume of a cuboid or a rectangular box :
int volume(  int l, int b, int h){
     return (l*b*h );
}
//Calculate the volume of a cube :
int volume(int a){
     return (a*a*a);
}

int main(){

cout<<"The sum of 3.14 and 6 is "<<sum(3.14,6)<<endl;
cout<<"The sum of 3, 6 and 7 is "<<sum(3,6,7)<<endl;
cout<<"The volume of a cuboid 3, 6 and 7 is "<<volume(3,6,7)<<endl;
cout<<"The volume of a cube 3 is "<<volume(3)<<endl;
cout<<"The volume of a cylinder 3, 6 is "<<volume(3,6)<<endl;

    return 0;
}