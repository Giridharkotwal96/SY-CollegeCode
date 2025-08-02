#include<stdio.h>

float balance;


void check_balance();

void deposite_amount()

{

int deposite;
printf("\nEnter the amount to be deposited : ");
scanf("%d", &deposite);

balance = balance + deposite ;
//check_balance();

}


void withdraw_amount()
{

int withdraw ;
printf("\nThe amount to been withdraw is : ");
scanf("%d", &withdraw);

if(withdraw<balance)
balance = balance - withdraw ;
else
printf("\nInsufficient balance");
check_balance();
}



void check_balance()
{
printf("\nThe available balance is : %f ", &balance);
}


void main()
{
int accNo, choice ;
char name[100], branch_name[50];

printf("\n\tEnter your name : ");
scanf("%s", &name);
printf("\n\tEnter your account number : ");
scanf("%d", &accNo);
printf("\n\tEnter branch name : ");
scanf("%s", &branch_name);
printf("\n\tEnter opening balance : ");
scanf("%f", &balance);

withdraw_amount();
check_balance();

do 

{
printf("\n withdraw, deposite, checkbalance, exit");
printf("\nEnter choice");
scanf("%d", &choice);

switch(choice)
{
case 1 : withdraw_amount();
break;

case 2 : deposite_amount();
break;

case 3 : check_balance();
break;

case 4 : printf("Exit");

}

}while(choice != 4);






}