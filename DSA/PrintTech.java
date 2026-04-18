class PrintTech extends College
{
	int intake;
	PrintTech()
	{
		System.out.println("Enter the total intake :- ");
		intake = sc.nextInt();
	}
	void show()
	{
		super.show();
		System.out.println("Total intake is :- "+intake);
	}
}