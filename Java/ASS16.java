class ASS16
{
	public static void main(String args[])
	{
		int l,i,j=0,k=0;
		char ch;
		
		String s = "12345ABCDEEEEFH";
		String s1= s.toUpperCase();
		l = s.length();
		for(i=0;i<l;i++)
		{
			ch = s1.charAt(i);
			switch(ch)
			{
				case 'A': 
				case 'E': 
				case 'I': 
				case 'O': 
				case 'U': 
				k++;
				break;
			}
				
	}
	System.out.println("Number of Digits is "+ k);
	//System.out.println("Number of Letters is "+ j);
}
}
