//Arya Dhole
//ENTC-A2
//22070123027
#include <iostream>
using namespace std;
int main()
{
 float num1;
 cout<< "Enter student marks : "<<endl ;
 cin>> num1;
 if(num1>=90)
 {
   cout<< "Grade is O "<<endl ;
 }
 else if(num1 >= 80)
 {
   cout<< "Grade is A+ "<<endl ;
 }
 else if(num1 >= 70)
 {
   cout<< "Grade is A "<<endl ;
 }
 else if(num1 >= 60)
 {
   cout<< "Grade is B+ "<<endl ;
 }
 else if(num1 >= 50)
 {
   cout<< "Grade is B "<<endl ;
 }
 else if(num1 >= 40)
 {
   cout<< "Grade is C "<<endl ;
 }
 else
 {
   cout<< "Fail"<<endl ;
 }
 return 0;
}
