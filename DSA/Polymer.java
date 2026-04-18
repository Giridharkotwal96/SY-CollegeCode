class Polymer extends College
{
	int code;
	double result;
	Polymer()
	{
		System.out.print("Enter the department code :- ");
		code = sc.nextInt();
		System.out.print("Enter the result of dept :- ");
		result = sc.nextDouble();
	}
	void show()
	{
		super.show();
		System.out.print("The department code is :- "+code);
		System.out.print("The result of dept is :- "+result+"%");
	}
}