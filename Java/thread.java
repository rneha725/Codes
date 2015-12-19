class Threading
{
	public static void main(String args[])
	{
		A ta=new A();
		Thread t_a= new Thread(ta);
		B t_b= new B() ;/*Newborn thread*/
																// t_a.setPriority(Thread.MIN_PRIORITY);
																// t_b.setPriority(t_a.getPriority()+1);
																// int a= t_b.getPriority();
																// System.out.println("\nPriority:"+ a);
		t_a.start();
		t_b.start();
	}
}

/*===============Threads===================*/

class A implements Runnable
{	
	public void run()
	{
		for(int i=0; i<5;i++) System.out.println("\ni= "+ i);
		// try {sleep(5000);}
		// catch(Exception e)
		// {
		// 	System.out.println("\nError: "+ e);
		// }
		// yield();
		System.out.println("HI");
	}
}

class B extends Thread
{
	public void run()
	{
		for(int i=0; i<5;i++) System.out.println("\nj= "+ i);
		yield();
		System.out.println("Neha");
		System.out.println("Rani");
	}
}