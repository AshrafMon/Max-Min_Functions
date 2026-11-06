#include <iostream>
#include <string>

using namespace std;
// Print Max. & Min. Value of two numbers
    
int main() {

int Num1=23,Num2=-10;     //Decleration & Initialization of Num1 & Num2 

int max_val=max(Num1,Num2);   // store max_val=23
int min_val=min(Num1,Num2);   //store min_val=-10

cout<<"Num1="<<Num1<<" , Num2="<<Num2<<endl;    // print Num1=23 , Num2=-10
cout<<"The max. Number = "<<max_val<<endl;
cout<<"The min. Number = "<<min_val<<endl;

 return 0;
}
