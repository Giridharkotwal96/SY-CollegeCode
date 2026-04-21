/*
Design a package contained class StringOperation which does following
operation on given input strings
1) Concatenation of two string
2) Reverse string
3) Delete particular letter from given position of letter
4) Making alternate letter capital
Design a class which will use this package and send required string to
StringOperation class
*/

package StringOps;

public class StringOperation{

public String concatenate(String s1, String s2){
return s1+s2;
}

public String reverse(String s1){
String rev = "";
for(int i=s1.length()-1;i>=0;i--)
rev += s1.charAt(i);
return rev;
}

public String deleteAtPosition(String s1, int pos) {
    if (pos < 0 || pos >= s1.length()) {
        return "Invalid position";
    }
    return s1.substring(0, pos) + s1.substring(pos + 1);
}

public String alternateCaps(String str) {
String result = "";
for (int i = 0; i < str.length(); i++) {
if (i % 2 == 0) {
result += Character.toUpperCase(str.charAt(i));
} 
else {
result += Character.toLowerCase(str.charAt(i));
}
}
return result;
}
}