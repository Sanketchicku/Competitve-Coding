class i2
{
	String s = " I am in class i2";
	String getdescription()
	{
		return s;
	}
}
class j2 extends i2
{
   String s = " I am in class j2";
	String getdescription()
	{
		System.out.println(s);
		String s = super.getdescription();
		return s ;
	}
}
class k2 extends j2
{
   String s = " I am in class k2";
	String getdescription()
	{
		System.out.println(s);
		String s = super.getdescription();
		return s ;
	}
}
class ASS32
{
	public static void main(String args[])
	{
		i2 i = new i2();
		j2 j = new j2();
		k2 k = new k2();
		i2 ref;
		ref = i;
		System.out.println(ref.getdescription());
		ref = j;
		System.out.println(ref.getdescription());
		ref =k;
		System.out.println(ref.getdescription());
	}
}
		
		
