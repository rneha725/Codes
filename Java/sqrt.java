import java.lang.Math;

class room
{
	static int length,breadth;
	static int getDim(int a, int b)
	{
		length=a;
		breadth=b;
		return a*b;
	}
}

class sqrt
{
	public static void main(String args[])
	{
		room m=new room();
		//int ar=room.getDim(10,10);
		m.getDim(10,1);
		int ar=m.length*m.breadth;
		System.out.print("Area is: "+ar);
	}
}

//Second program goes here...================================================================================================================//

/*
import java.io.*;
import java.util.Scanner;

class cls
{
	int l;
}


class sqrt
{
	cls m;
	int n=m instanceof cls;
	System.out.println(n);
	//final int STR=200;
	public static void main(String args[]) throws IOException
	{
		//to input other than character************
		//use in.readline()*/
		// InputStreamReader read = new InputStreamReader(System.in);
		// BufferedReader in = new BufferedReader(read);
		/*********************************************=/
		Scanner input= new Scanner(System.in);
		//Above one too, for type other than character

		int x=0;
		// char c = (char) System.in.read();
		try
		{
			System.out.print("\nEnter x: ");
			x=input.nextInt();
			// x=Float.parseFloat(in.readLine());
		}
		catch(Exception e)
		{
			System.out.println("error is:"+e);
		}
	 	System.out.println("\nx= "+x);		
	}
}
*/

//***************Third Program***********************//
/*
import java.util.*;

class ArrayListCollection
{
	public static void main(String args[])
	{
		ArrayList <Integer> list= new ArrayList <Integer>();
		NumberingList(list);
		int sum=0;
		Iterator <Integer> iter= list.iterator();
		while(iter.hasNext())
		{
			Integer val=iter.next();
			sum=sum+val;
		}
		System.out.println("Sum is:"+ sum);
	}
	private static void NumberingList(ArrayList <Integer> list)
	{
		list.add(new Integer(1));
		list.add(new Integer(2));
	}
}
*/

/*class sqrt
{
	public static void main(String args[])
	{	char choice;
		System.out.print("\nEnter a character:");
		try
		{	
			choice=(char) System.in.read();
			switch(choice)
			{
				case '1':System.out.print("\nCase 1");
						 break;
			}
		}
		catch(Exception e)
		{
			System.out.println("I/O Error.");
		}
	}
}


*/