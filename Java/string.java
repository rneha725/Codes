class main
{
	public static void main(String args[])
	{
		// String nm[]={"Neha","Rani","Mani"};
		// boolean n=nm[2].equals(nm[1]);
		// char c=nm[2].chartAt(2);
		// System.out.println(c);

		StringBuffer str= new StringBuffer("Neha");
		// System.out.println(str.ChartAt(1));
		String new_str= new String(str.toString());
		int pos= new_str.indexOf("e");
		System.out.println(pos);
	}
}