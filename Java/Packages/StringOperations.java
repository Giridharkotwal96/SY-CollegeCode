package stringops;

public class StringOperations {
public String concatenate(String s1, String s2) {
return s1 + s2;
}
public String reverse(String s) {
return new StringBuilder(s).reverse().toString();
}

public String deleteAtPosition(String s, int position) {
if (position < 0 || position >= s.length()) {
return "Invalid position";
}
return s.substring(0, position) + s.substring(position + 1);
}
public String alternateCapital(String s) {
StringBuilder result = new StringBuilder();
for (int i = 0; i < s.length(); i++) {
if (i % 2 == 0) {
result.append(Character.toUpperCase(s.charAt(i)));
} 
else{
result.append(Character.toLowerCase(s.charAt(i)));
}
}
return result.toString();
}
}