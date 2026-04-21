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
class MergerTriangle{
public static void main(String args[]){
int row =7;
//Upper Half 
for (int i = 1; i <= row/2; i++) {
for (int j = 1; j <= i; j++) {
System.out.print("* ");
}
System.out.println();
}
//Lower Half
for (int i = row - 3; i >= 1; i--) {
for (int j = 1; j <= i; j++) {
System.out.print("* ");
}
System.out.println();
}
}
}