//Pattern Printing 
class PatternPrinting{ 
public void rightTriangle(int row){ 
System.out.println("\nPrinting right angled triangle"); 
for(int i=0;i<row;i++){ 
for(int j=0;j<=i;j++) 
System.out.print("*"); 
System.out.println(); 
}} 
public void diamondShape(int row){ 
System.out.println("Printing diamond shape"); 
//Upper 
for(int i=0;i<row/2;i++){ 
for(int j=0;j<row-1-i;j++) 
System.out.print(" "); 
for(int k=0;k<=i;k++) 
System.out.print("* "); 
System.out.println(); 
} 
//Lower 
for (int i = row - 3; i >= 0; i--) { 
for (int j = 0; j < row - 1 - i; j++) 
System.out.print(" "); 
for (int k = 0; k <= i; k++) 
System.out.print("* "); 
System.out.println(); 
}} 
void kShape(int row){ 
System.out.println("Printing K shape"); 
for (int i = row/2; i >= 0; i--) { 
for (int j = 0; j <=i; j++) 
System.out.print("*"); 
System.out.println();} 
for (int i = 1; i <= row/2; i++) { 
for (int j = 0; j <= i; j++) 
System.out.print("*"); 
System.out.println(); 
}} 
void pyramidShape(int row){ 
System.out.println("\nPrinting pyramid Shape"); 
for(int i=0;i<row;i++){ 
for(int j=0;j<row-1-i;j++) 
System.out.print(" "); 
for(int k=0;k<=i;k++) 
System.out.print("* "); 
System.out.println(); 
}} 
public void sandClock(int row){ 
System.out.println("\nPrinting sandClock pattern"); 
for (int i = 0; i <=row/2; i++){ 
for (int j = 0; j < i; j++) 
System.out.print(" "); 
for (int k = row; k > i; k--) 
System.out.print("* "); 
System.out.println();} 
for(int i=0;i<row;i++){ 
for(int j=0;j<row-1-i;j++) 
System.out.print(" "); 
for(int k=0;k<=i;k++) 
System.out.print("* "); 
System.out.println(); 
}}} 
