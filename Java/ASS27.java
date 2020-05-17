class rock
{
	double mass;
	rock( double m)
	{
		mass = m;
	}
	
}
class ASS27
{
	public static void main(String args[])
	{
		rock ob[] = new rock[10];
		double sum = 0;
		System.out.println("The masses are =");
		for(int i=0;i<10;i++)
		{
			double mass = 10*Math.random();
			ob[i] = new rock(mass);
			System.out.println(ob[i].mass);
			sum+= ob[i].mass;
		}
		System.out.println("The total mass is " +sum);
	}
}
