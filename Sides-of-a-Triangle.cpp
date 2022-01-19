/*23. 4.33 (Sides of a Triangle) Write a program that reads three
nonzero double values and determines and prints whether they
could represent the sides of a triangle.(c++ how to program)*/
#include<iostream>
using namespace std ;

int main (){
    double a(0),b(0),c(0);
    cout <<"Enter the value of A :";
    cin>>a;
    cout <<"Enter the value of B :";
    cin>>b;
    cout <<"Enter the value of C :";
    cin>>c;
    
    if(a + b > c){
        cout << " A and B they could represent the sides of a triangle " << endl ;
    }
    else{
        cout << " A and B could not represent the sides of a triangle " << endl ;

    }

    if(b + c > a){
        cout << " B and C they could represent the sides of a triangle " << endl ;
    }
    else{
        cout << " B and C could not represent the sides of a triangle " << endl ;

    }

    if(a + c > b){
        cout << " A and C they could represent the sides of a triangle " << endl ;
    }
    else{
        cout << " A and C could not represent the sides of a triangle " << endl ;

    }
}