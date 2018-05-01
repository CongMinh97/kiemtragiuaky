#include <iostream>

using namespace std;



class calender
{
private:
       int day,month,year;
public:
      
       calender()
       {
	       day=0;
	       month=0;
	       year=0;
      
       }

       void calculate(int a,int b,int c)
       {
		   day=a;
	       month=b;
	       year=c;
            do
              {

	              month=month+1;
	              day=day-30;
              }while(day>30);
            do
              {
	              year=year++;
	              month=month-12;
              }while(month>12);
             
              if(month==0)
              {
              	month++;
              }

       }
       void showdata()
       {
	        system("cls");
	        cout<<"\tMydays calender"<<endl;
       		cout<<"\t"<<day<<" "<<month<<" "<<year<<" "<<endl;
       }

};

int main()
{
       calender cal;
       int dd,mm,yy;
              cout<<"Days"<<endl;
       cin>>dd;
              cout<<"Month"<<endl;
       cin>>mm;
              cout<<"Year"<<endl;
       cin>>yy;
       cal.calculate(dd,mm,yy);
       cal.showdata();
}
