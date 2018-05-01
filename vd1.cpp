#include <iostream>
#include <conio.h>
using namespace std;
class Int {
private:
	int intvar;
public:
	Int() 
	{
		intvar = 0;
	}
	Int(int x) 
	{
		intvar = x;
	}
	void display() 
	{
		cout << intvar << endl;
	}
	void add(Int x, Int y) 
	{
		intvar = x.intvar + y.intvar;
	}
};
int main() {
	Int a(10), b(28);
	Int c;
	c.add(a, b);
	c.display();
}
