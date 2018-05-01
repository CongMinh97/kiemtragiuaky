#include<iostream>
#include<conio.h>
using namespace std;

class fraction{
 private:
  int numerator, denominator;
  char c;
  void dispFct()
  {
   cout<<numerator<<"/"<<denominator;
  }
 public:
  void getFct(){
   cout<<"Fraction: "; 
   cin>>numerator>>c>>denominator;
  }
  void addFct(fraction x, fraction y){
   numerator=x.numerator*y.denominator+x.denominator*y.numerator;
   denominator=x.denominator*y.denominator;
   cout<<"Sum = "; 
   dispFct();
 }
};

int main()
{
 fraction f1,f2,f3;

 f1.getFct();
 f2.getFct();
 f3.addFct(f1, f2);
}
