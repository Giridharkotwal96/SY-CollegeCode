/*
Write a program which will implements Chating EchoServer using TCP Socket
Connection.
*/

import java.io.*;
import java.net.*;
class EchoServer{
public static void main(String args[]) throws Exception{
int port = 7900;

ServerSocket serverSocket = new ServerSocket(port);
System.out.println("Server is on port :- "+port);

while(true){
Socket socket = serverSocket.accept();
System.out.println("Client is connected!");
new Thread(new ClientHandler(socket)).start();
}
}
}

class ClientHandler implements Runnable{
private Socket socket;
public ClientHandler(Socket socket){
this.socket = socket; 
}

public void run(){

try{
BufferedReader input = new BufferedReader(new InputStreamReader(socket.getInputStream()));
PrintWriter output = new PrintWriter(socket.getOutputStream(),true);

String message;
while((message= input.readLine()) != null){
System.out.println("Client message :- "+message);
output.println(message);

if(message.equalsIgnoreCase("exit"))
break;
}
socket.close();
}catch(Exception e){
System.out.println("Error handling client :- "+ e.getMessage());
}
}
}