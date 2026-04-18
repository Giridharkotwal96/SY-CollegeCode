import java.util.*;
class BankProcess{
String name;
long accNo;
String accType;
double balance;
Scanner sc = new Scanner(System.in);
BankProcess(){
System.out.println("Enter the name of depositor :- ");
name = sc.nextLine();
System.out.println("Enter the acc number :- ");
accNo = sc.nextLong();
System.out.println("Enter the acc type :- ");
sc.nextLine();
accType  = sc.nextLine();
System.out.println("Initial acc balance is  :- ");
balance = sc.nextDouble(); 
}
void deposite()
{
int deposite;
System.out.println("Enter the amount which have to be deposite :- ");
deposite = sc.nextInt();
balance = balance + deposite;
System.out.println("The acc balance is :- "+balance);
}
void withdraw(){
int withdraw;
System.out.println("Enter the amount which have to be withdrawl :- ");
withdraw = sc.nextInt();
if(withdraw<=balance){
balance = balance-withdraw;
System.out.println("The acc balance is :- "+balance);
}
else
System.out.println("Insuffciant balance!");
}
void display(){
System.out.println("The name holder is :- "+name);
System.out.println("The acc no is :- "+accNo);
System.out.println("The acc type is :- "+accType);
System.out.println("The acc balance is :- "+balance);
}
}