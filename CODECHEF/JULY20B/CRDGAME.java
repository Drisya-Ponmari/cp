
/*******************************************
Read a byte - nextByte()
Read a short - nextShort()
Read an int - nextInt()
Read a long - nextLong()
Read a float - nextFloat()
Read a double - nextDouble()
Read a boolean - nextBoolean()
Read a complete line - nextLine()
Read a word - next()
****************************************/
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static long Sum(long a)
	{
		long  s =0;
			while(a!=0)
		{
			s = s + a%10;
			a = a/10;
		}
		return s;
	}
	public static void main(String[] args) throws java.lang.Exception
	{
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t>0)
            {
            	int n = sc.nextInt();
            	long  pointc = 0,pointm=0,pc,pm,c,m;
            	while(n>0)
            	{
            		c = sc.nextInt();
            		m = sc.nextInt();
            		pc = Sum(c);
					pm= Sum(m);
            		if(pc == pm)
					{
						pointc++;
						pointm++;
					}
					else if(pc > pm)
						pointc++;
					else
						pointm++;
					
					n--;
            	}
            	
            	if(pointc == pointm)
					System.out.println(2 + " " + pointc);
				else if(pointc > pointm)
					System.out.println(0 + " " + pointc);
				else
					System.out.println(1 + " " + pointm);
				t--;
            }
            
	}
}
