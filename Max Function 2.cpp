#include <iostream>
#include <string>

using namespace std;
// Print Max. & Min. Value of two input numbers
    
int main() {

int Num1,Num2;     //Decleration & Initialization of Num1 & Num2

cout<<"Please Enter First Number :";
cin>>Num1;
cout<<"Please Enter second Number :";
cin>>Num2;

int max_val=max(Num1,Num2);   // store max_val between Num1&num2
int min_val=min(Num1,Num2);   // store min_val between Num1&num2

cout<<"Num1="<<Num1<<" , Num2="<<Num2<<endl;    // print Num1 & Num2
cout<<"The max. Number = "<<max_val<<endl;
cout<<"The min. Number = "<<min_val<<endl;

 return 0;
}
