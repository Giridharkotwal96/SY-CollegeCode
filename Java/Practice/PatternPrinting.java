class PatternPrinting{
void diamondShape(int row){
System.out.println("Printing Diamond shape!");
//Upper
for(int i=0;i<row/2;i++){
for(int k=0;k<=i;k++)
System.out.print("*");
for(int j=0;j<row-1-i;j++)
System.out.print(" ");
System.out.println();
}
//Lower 
for(int i=row-3;i>=0;i--){
for(int k=0;k<=i;k++)
System.out.print("*");
for(int j=0;j<row-1-i;j++)
System.out.print(" ");

System.out.println();
}
}
}