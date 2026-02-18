import java.util.Scanner; 

class Base
{
int a, b;
Scanner sc = new Scanner(System.in);
Base()
{
System.out.println("Enter two nummbers :- ");
a=sc.nextInt();
b=sc.nextInt();
}
}

class Derived extends Base
{
int c;
Scanner sc = new Scanner(System.in);
Derived()
{
System.out.println("Enter the third value :- ");
c = sc.nextInt();
System.out.println("Value of x, y is :- "+a+b);
System.out.println("Value of z is:- "+c);
}
void dispMax() {
int max = a;
if (b > max)
max = b;
if (c > max)
max = c;
System.out.println("Maximum = " + max);
}
void dispMin() {
int min = a;
if (b < min)
min = b;
if (c < min)
min = c;
System.out.println("Minimum = " + min);
}
void equality(){
if (a == b || b == c || a == c)
System.out.println("Two numbers are equal");
else
System.out.println("All numbers are different");
}
}