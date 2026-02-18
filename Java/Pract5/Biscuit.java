/*Implement the multilevel inheritance from following figure where sell_price 
is price + 2.5% VAT extra. Accept and display whole data for one biscuit 
box.*/
import java.util.Scanner;
class Biscuit
{
String name,company;
Scanner sc = new Scanner(System.in);
Biscuit()
{
System.out.println("Enter the name of company:- ");
company = sc.nextLine();
System.out.println("Enter the name of biscuit :- ");
name = sc.nextLine();
}
}