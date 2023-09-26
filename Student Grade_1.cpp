//Arya Dhole
//ENTC-A2
//22070123027
#include <iostream>
using namespace std;
int main()
{
 float x;
 cout<< "Enter student marks : "<<endl ;
 cin>> x;
 if(x>90)
 {
   cout<< "Grade is O "<<endl ;
 }
 else if(x > 80)
 {
   cout<< "Grade is A+ "<<endl ;
 }
 else if(x > 70)
 {
   cout<< "Grade is A "<<endl ;
 }
 else if(x > 60)
 {
   cout<< "Grade is B+ "<<endl ;
 }
 else if(x > 50)
 {
   cout<< "Grade is B "<<endl ;
 }
 else if(x > 40)
 {
   cout<< "Grade is C "<<endl ;
 }
 else
 {
   cout<< "Fail"<<endl ;
 }
 return 0;
}
