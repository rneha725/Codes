/*class parent // if final then can not be inherited 
{
	int a;
	parent(int b)
	{
		a=b;
	}
	parent()
	{a=0;}
	final void display()
	{
		System.out.println("a= "+a);
	}
}

class child extends parent
{
	int b;
	child(int a, int b)
	{
		super(a);
		this.b=b;
	}
	//void display()
	{
	//	System.out.println("a= "+a+"\nb= "+b);
	}
	// finalize();
	// {
	// 	System.out.println("\nFinalized!!");
	// }
}

class advanced
{
	public static void main(String args[])
	{
		child c=new child(10,9);
		c.display();
	}
}*/

class cls
{
	static void func(String ... person)
	{
		for(String name: person)
		{
			System.out.println(name);
		}
	}

	public static void main(String args[])
	{
		func("Neha", "Rani");
	}
}



