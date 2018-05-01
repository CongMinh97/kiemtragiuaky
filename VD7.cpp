#include <iostream>
using namespace std;
class direction

{
      
public:
       int degree;
       float minute;
       char direc,press;
       int degree1;
       float minute1;
       char dir1;

       direction ()
       {}

              int longitude(int d,float m,char dir)
              {
	              degree=d;
	              minute=m;
	              direc=dir;

              if ((0<degree)&&(degree<=180))
              {     
                     d=degree;
                     return(degree);
                    
              }
              else
              {
              cout<<"Enter correct information"<<endl;
              }
			  }

              int latitude(int d,float m,char dir)
              {
	              degree1=d;
	              minute1=m;
	              dir1=dir;

              if ((0<degree1)&&(degree1<90))
              {     
            	d=degree1;
                return(degree1);
             
              }
              else
              {
              	cout<<"Enter correct information"<<endl;
              }

              }
};

class counter
{
public:
      
       void showdata(int a,int b,float c,float d,char e,char f)
       {
              for(int u=0;u<2;u++)
              {cout<<a<<"\xF8"<<c<<"\'"<<e<<endl;
              cout<<b<<"\xF8"<<d<<"\'"<<f<<endl;}


       }
      
      
};
int main()
{
       direction dirc;
       counter counterx;

       int inputdeg,inputdeg2,ship;
       float min,min2;
       char dir,dir2;
       int clas1,clas2;

       cout<<"Degree for longitute"<<endl;
       cin>>inputdeg;
       cout<<"Minutes for longitute"<<endl;
       cin>>min;
       cout<<"Direction for longitute Press E for east and W for west"<<endl;
       cin>>dir;
      
       cout<<"Degree for latitude"<<endl;
       cin>>inputdeg2;
       cout<<"Minutes for latitude"<<endl;
       cin>>min2;
       cout<<"Direction for latitude Press N for east and S for west"<<endl;
       cin>>dir2;

       clas1=dirc.longitude(inputdeg,min,dir);
       clas2=dirc.latitude(inputdeg2,min2,dir2);
       counterx.showdata(clas1,clas2,min,min2,dir,dir2);

}

