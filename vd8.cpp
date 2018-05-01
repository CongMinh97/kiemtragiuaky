#include<iostream>
using namespace std;
class counter
{
private:
       static int count;
       int num;
public:
counter()
       {
              static int count=0;
              num=++count;
       }
void show()
       {
              cout<<"I am Oject "<<num<<"\n";
       }
};
int main()
       { counter x[6];
              for(int i=0;i<6;i++)
              {
                     x[i].show();
              }
       }
