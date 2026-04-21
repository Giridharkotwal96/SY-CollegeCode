/*
Apply Java programming knowledge to print following Pattern, accept row count
from keyboard:
    *
   * *
  * * *
 * * * *
* * * * *

*/

class Triangle{
public static void main(String args[]){
int row=5;
for(int i=0;i<row;i++){
for(int j=1;j<=row-i;j++)
System.out.print(" ");
for(int k=0;k<=i;k++)
System.out.print("* ");
System.out.println();
}
}
}