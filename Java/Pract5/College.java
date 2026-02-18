import java.util.Scanner;
class College
{
	String name;
	int instCode;
	Scanner sc = new Scanner(System.in);
	College()
	{
		//System.out.println("Enter the name of institute :- ");
		name = "SKNSCOEK";
		//System.out.println("Enter the institute code :- ");
		instCode =6630;
	}
	void show()
	{
		System.out.println("The name of institute is :- "+name);
		System.out.println("The institute code is :- "+instCode);
	}
}