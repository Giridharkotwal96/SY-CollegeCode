import java.util.Scanner;

class TestBankAccount{ 
public static void main(String args[]){ 
int choice; 
Scanner sc = new Scanner(System.in); 
BankAccount Ba = new BankAccount(); 
do{ 
System.out.print("\n1.Deposite Amount\n2.Withdraw Amount\n3.UserInfo\n4.Exit\n"); 
System.out.println("Enter the choice :- "); 
choice = sc.nextInt(); 
switch(choice){ 
case 1 : Ba.deposite(); 
break; 
case 2 : Ba.withDraw(); 
break; 
case 3 : Ba.displayUserInfo(); 
break; 
case 4 : System.out.println("\nThanks For Visiting to our bank");} 
}while(choice!=4);}}