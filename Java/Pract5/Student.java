/*Declare a class ‘Student’ with data members ‘name’, ‘roll number’ and 
‘marks’. Also declare a class ‘MyRecord’ which inherited from class 
‘Student’. Display name, roll number and percentage by creating the object 
of class ‘MyRecord’.*/

import java.util.Scanner;
class Student
{
int rollNo;
String name;
double marks;
Scanner sc = new Scanner(System.in);
Student()
{
System.out.println("Enter the name of student :- ");
name = sc.nextLine();
System.out.println("Enter the roll no:- ");
rollNo = sc.nextInt();
System.out.println("Enter the marks of Student :- ");
marks = sc.nextDouble();
}
}