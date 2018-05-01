#include<iostream>
using namespace std;
class angle
{
private:
	int degrees;
    float minutes;
    char direction;
public:
    void getdata()
    {
    	cout<<"\n Degrees :";
        cin>>degrees;
        cout<<"\n Minutes :";
        cin>>minutes;
        cout<<"\n Direction (N,E,W,S) :";
        cin>>direction;
    }
    void display1()
    {
        cout<<"\n On latitude :"<<degrees<<"\xf8"<<minutes<<"'"<<direction;
    }
    void display()
    {
        cout<<"\non longitude :"<<degrees<<"\xf8"<<minutes<<"'"<<direction<<endl;
    
    }
};
class ship
{
	private:
        angle latitude;
    	angle longitude;
        int ship_number;
        static int count;
	public:
    	void getposition()
        {
        	count++;
        	ship_number=count;
            cout<<"\n Direction on latitude :\n";
            latitude.getdata();
            cout<<"\n Direction on longitude :\n";
            longitude.getdata();
     	}
        void display()
        {
        	cout<<"\n Direction of ship number "<<ship_number<<" is:- \n";
            latitude.display1();
            longitude.display();
        }
};
int ship::count=0;
int main()
{
	ship ship1,ship2;
    ship1.getposition();
    ship2.getposition();
    ship1.display();
    ship2.display();
    return 0;
}

