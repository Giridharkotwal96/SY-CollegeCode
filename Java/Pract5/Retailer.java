
class Retailer extends Dealer
{
double sell_price;

Retailer()
{
sell_price += sell_price*(2.5/100);
}
void display()
{
System.out.println("The name of company is :- "+name);
System.out.println("Name of product is :- "+product_name);
System.out.println("The sells price after 2.5% VAT extra" +sell_price);
}
}