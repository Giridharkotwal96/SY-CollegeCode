//Giridhar Kotwal 
/*Overload the method ‘findVolume()’ to find the volume of the cube, cone, cylinder and sphere. Initialize 
the objects using constructors. Make the use of this().*/ 
import java.util.Scanner; 
class Volume{ 
double vol; 
void findVolume(int side){ 
vol = side*side*side; 
System.out.println("Hence the volume of cube is :- "+vol); 
} 
void findVolume(int radius, int height){ 
vol = (1.0/3)*3.14*radius*radius*height; 
System.out.println("Hence the volume of cone is :- "+vol); 
} 
void findVolume(double radius, double height){ 
vol = (4.0/3)*3.14*radius*radius*height; 
System.out.println("Hence the volume of cylinder is :- "+vol); 
} 
void findVolume(double rad){ 
vol = (4/3)*3.14*rad*rad*rad; 
System.out.println("Hence the volume of sphere is :- "+vol); 
}}