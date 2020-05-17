class sphere
{
	double r,x,y;
	sphere( double r1,double x1, double y1)
	{
		r=r1;
		x=x1;
		y =y1;
	}
	void display()
	{
			System.out.println("Radius , X, Y"+r + x+ y);
	}
}

class ASS21
{
	public static void main(String args[])
	{
		sphere a =  new sphere(1,2,3);
		
		a.display();
	}
}
