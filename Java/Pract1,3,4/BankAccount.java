//Giridhar Kotwal 
//Design a class to represent a bank account 
import java.util.Scanner; 
class BankAccount{ 
String depositorName; 
long accountNo; 
String accountType; 
double balance; 
int deposite; 
Scanner sc = new Scanner(System.in); 
BankAccount(){ 
System.out.println("Welcome to Bank Of India"); 
System.out.println("Enter the initial info"); 
System.out.println("Enter the Depositor name :- "); 
depositorName = sc.nextLine(); 
System.out.println("Enter the Account number :- "); 
accountNo = sc.nextLong(); 
System.out.println("Enter the account type :- "); 
accountType = sc.next(); 
System.out.println("The balance is :- "+balance); 
} 
void deposite(){ 
System.out.println("Enter the amount to be deposite :- "); 
deposite = sc.nextInt(); 
balance +=deposite; 
System.out.println("Amount deposited successfully!"); 
} 
void withDraw(){ 
System.out.println("Enter the amount to be withdraw :- "); 
int amount = sc.nextInt(); 
if(balance>=amount){ 
balance-=amount; 
System.out.println(balance +" rupee debited!"); 
} 
else 
System.out.println("Insufficient balance!"); 
} 
void displayUserInfo(){ 
System.out.println("The name of user is :- "+depositorName); 
System.out.println("The balance is :- "+balance);}}