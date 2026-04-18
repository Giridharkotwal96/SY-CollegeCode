package stringops;

public class StringOperations{
//Concatenation
public String concatenate(String s1,String s2){
return s1+s2;
}

//reverse
public String reverse(String s1){
return new StringBuilder(s1).reverse().toString();
}

//Delete character at particular position
public String deleteAtPosition(String s1, int position){
if(position<0||position>=s1.length())
return "Invalid postion for deletion";
return s1.substring(0,position)+s1.substring(position+1);
}

//Alternate capital letters
public String alternateCapital(String s1){
StringBuilder result = new StringBuilder();
for(int i=0;i<s1.length();i++){
if(i%2==0)
result.append(Character.toLowerCase(s1.charAt(i)));
else
result.append(Character.toUpperCase(s1.charAt(i)));
}
return result.toString();
}
}