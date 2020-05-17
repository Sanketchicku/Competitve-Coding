#include<iostream>
using namespace std;

class point
{
	int x;
	int y;
	public:
	
	point(int x1, int y1)
	{
		x= x1;
		y=y1;
	}
	point ( const point &p2)
	{
		x= p2.x;
		y = p2.y;
	}
	
	int getx();
	int gety();
};

int point::getx()
{
	return x;
}
int point ::gety()
{
	return y;
}

int main()
{
	point p1(10,15);
	point p2 = p1;
	
	cout<<p1.getx()<<p1.gety();
	cout<<p2.getx()<<p2.gety();
return 0;
}
