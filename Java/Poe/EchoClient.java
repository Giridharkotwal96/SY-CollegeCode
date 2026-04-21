import java.io.*;
import java.net.*;

class EchoClient{
public static void main(String args[]){
String host = 	"127.0.0.1";
int port = 7900;

try{
Socket socket = new Socket(host,port);
System.out.println("Connected to server!");

BufferedReader userInput = new BufferedReader(new InputStreamReader(System.in));
BufferedReader input = new BufferedReader(new InputStreamReader(socket.getInputStream()));
PrintWriter output = new PrintWriter(socket.getOutputStream(), true);

String message;

while(true){
System.out.println("You :- ");
message = userInput.readLine();
output.println(message);
String response = input.readLine();
System.out.println("Echo :- "+response);

if(message.equalsIgnoreCase("exit"))
break;
}
socket.close();
}catch(Exception e){
System.out.println("Connection error :- "+e.getMessage());
}
}
}