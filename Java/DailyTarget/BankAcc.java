/* Define a class ‘BankAccount’ having data members: acc_no, name and
balance. Define appropriate methods to initialize and display the values of
these data members. Input values for two objects and determine who is
having more balance in his/her account.
*/

import java.util.Scanner;
class BankAcc{
int acc_no;
String name;
double balance;
void initialize(){
Scanner sc = new Scanner(System.in);
System.out.println("Enter the name of account holder :- ");
name = sc.nextLine();
System.out.println("Enter the account number of the assigned to user :- ");
acc_no = sc.nextInt();
System.out.println("Enter the opening account balance :- ");
balance = sc.nextDouble();
}

void display(){
System.out.println("Account holder name :- "+name);
System.out.println("Account number is :- "+acc_no);
System.out.println("Account balance is :- "+balance);
}
}