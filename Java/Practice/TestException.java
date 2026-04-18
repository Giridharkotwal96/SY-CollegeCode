import java.util.*;
class TestException{
public static void main(String args[]){
Scanner sc = new Scanner(System.in);
System.out.println("Enter the country name :- ");
String input = sc.nextLine();
try{
if(!input.equals("India"))
throw new NoMatchException("String is not equal to India");
else
System.out.println("Valid input");
}
catch(NoMatchException e){
System.out.println("Exception caught :- "+e.getMessage());
}
}
}
