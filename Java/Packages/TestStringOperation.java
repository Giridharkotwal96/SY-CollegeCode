import stringops.StringOperations;
import java.util.Scanner;

public class TestStringOperation 
{
public static void main(String[] args) 
{
Scanner sc = new Scanner(System.in);
StringOperations so = new StringOperations();
System.out.println("Enter the 1st string :- ");
String s1 = sc.nextLine();
System.out.println("Enter the 2nd string :- ");
String s2 = sc.nextLine();
System.out.println("Concatenation: " +
so.concatenate(s1, s2));
System.out.println("Reverse: " +
so.reverse(s1));
System.out.println("Enter the index to delete the character :- ");
int idx = sc.nextInt();
System.out.println("Delete at pos: " +
so.deleteAtPosition(s2, idx));
System.out.println("Alternate Capital: " +
so.alternateCapital(s1));
}
}