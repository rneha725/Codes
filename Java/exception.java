import java.lang.Exception;

class MyExp extends Exception
{
	MyExp()
	{
		super();
	}
}
class Main
{
	public static void main(String args[])
	{
		int i=9;
		int p[]={3};
		try
		{
			p[0]=0;
			int c=8/(i-89);
			throw new MyExp();
		}
		catch(ArithmeticException e)
		{
			System.out.println("\nArithmetic Exeption!!");
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println("\nArray index out of bounds!!");
		}
		// catch(Exception e)
		// {
		// 	System.out.println("\nException!!");
		// }
		catch(MyExp e)
		{
			System.out.println("\nError Message: "+ e.getMessage());
		}
		finally
		{
			System.out.println("\nI am always here.");
		}

	}
}