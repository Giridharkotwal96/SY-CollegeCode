import java.util.Scanner;
class TestException{
public static void main(String args[]){
Scanner sc = new Scanner(System.in);
System.out.println("Enter the name of country :- ");
String input = sc.nextLine();
try{
if(!input.equalsIgnoreCase("India"))
System.out.println("Not get excpected message");
else
System.out.println("Valid input");
}
catch(Exception e){
System.out.println("Exception occur :- "+e.getMessage());
}
}
}