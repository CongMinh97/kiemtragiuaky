#include <iostream>
#include <conio.h>

using namespace std;
char getWhatTheyWant();
class tollBooth
{
 private:
  unsigned int numCars;
  double amount;
 public:
  tollBooth()
  {
   numCars = 0;
   amount = 0;
  }
  void payingCar(){
   numCars++;
   amount+=0.50;
  }
  void noPayCar()
  {
   numCars++;
  }
  void display() 
  {
   cout << "Number Of Total Cars: " << numCars << endl;
   cout << "Total Amount: " << amount << endl;
  }
};

int main()
{
 tollBooth booth;
 char whatTheyWant;
 whatTheyWant = getWhatTheyWant();
 
 while(whatTheyWant!='s'){
  switch(whatTheyWant){
   case('p'):
    cout << "Paid" << endl << endl;
    booth.payingCar();
    whatTheyWant = getWhatTheyWant();
    break;
   case('n'):
    cout << "Not Paid" << endl << endl;
    booth.noPayCar();
    whatTheyWant = getWhatTheyWant();
    break;
   case('s'):
    cout << "Result" << endl << endl;
    break;
   default:
    cout << "Invalid Input" << endl;
  }
 }
 booth.display();
}

char getWhatTheyWant(){
 char a;
 cout << " 'p' To Pay And Pass" << endl;
 cout << " 'n' To Pass Without Paying" << endl;
 cout << " 's' To Show Result And Exit" << endl;
 cout << "make your choice" << endl;
 a = getch();
 return a;
}
