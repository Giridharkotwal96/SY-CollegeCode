
class Dealer extends Biscuit
{
String product_name;
int price;
Dealer()
{
System.out.println("Enter the product name :- ");
product_name = sc.nextLine();
sc.nextLine();
System.out.println("Enter the price :-");
price = sc.nextInt();
}
}