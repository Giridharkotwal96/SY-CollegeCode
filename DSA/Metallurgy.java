class Metallurgy extends College
{
	String hod;
	Metallurgy()
	{
		sc.nextLine();
		System.out.print("Enter the name of HOD :- ");
		hod = sc.nextLine();
	}
	void show()
	{
		super.show();
		System.out.println("The name of HOD is :- "+hod);
	}
}