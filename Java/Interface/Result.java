import java.util.Scanner;
class Result extends Student implements Examination,Institute 
{
double per;
public void input()
{
Scanner sc = new Scanner(System.in);
System.out.println("Enter the name of student :- ");
name = sc.nextLine();
System.out.println("Enter the roll no :- ");
roll = sc.nextInt();
System.out.println("Enter the marks of ut 1:- ");
marks1 = sc.nextInt();
System.out.println("Enter the marks of ut 2:- ");
marks2 = sc.nextInt();
}
public void calPercentage()
{
per = ((marks1+marks2)/420)*100;
}
void display()
{
System.out.println("Institute name is :- "+NAME);
System.out.println("Institute intake is :- "+INTAKE);
System.out.println("The name of student is :- "+name);
System.out.println("Roll no is :- "+roll);
System.out.println("marks is :- "+per);
}
}