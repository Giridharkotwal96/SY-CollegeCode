/*
Apply Java programming knowledge to print following Pattern, accept row count
from keyboard:
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/

class DiamondShape{
public static void main(String args[]){
int row = 7;
System.out.println("Printing diamond shape"); 
int top=(row+1)/2;
for(int i=1;i<=top;i++){
for(int j=1;j<=top-i;j++)
System.out.print(" ");
for(int k=1;k<=i;k++)
System.out.print("* ");
System.out.println();
}
for(int i=row/2;i>=1;i--){
for(int j=1;j<=top-i;j++)
System.out.print(" ");
for(int k=1;k<=i;k++)
System.out.print("* ");
System.out.println();
}}
}