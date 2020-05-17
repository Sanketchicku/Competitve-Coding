abstract class Airplane
{
	abstract void getpasses(int m);
	abstract public String test();
}
class B747 extends Airplane
{
	
   void getpasses(int m)
   {
	   System.out.println("MAXM IS"+m);
   }
   public String test()
   {
	   return("SDBJ");
   }
}
class B757 extends Airplane
{
	
   void getpasses(int m)
   {
	   System.out.println("MAXM IS"+m);
   }
   public String test()
   {
	   return("SDBJrerrr");
   }
}
class B767 extends Airplane
{
	
   void getpasses(int m)
   {
	   System.out.println("MAXM IS"+m);
   }
   public String test()
   {
	   return("SDBJerwregggggg");
   }
}
class ASS35
{
	public static void main(String args[])
	{
		B747 b1 = new B747();
		B757 b2 = new B757();
		B767 b3 = new B767();
		b1.getpasses(100);
	   System.out.println(b1);
	   b2.getpasses(200);
	  System.out.println(b2);
	   //b3.getpasses();
	  System.out.println(b3);
     }
 }		
		
		
