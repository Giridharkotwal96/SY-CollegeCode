// ChatClient.java
import java.io.*;
import java.net.*;

class ChatClient {
  public static void main(String args[]) throws Exception {

    Socket socket = new Socket("10.102.158.70", 68);

    System.out.println("Connected to server.");

    BufferedReader in = new BufferedReader(
        new InputStreamReader(socket.getInputStream()));

    PrintWriter out = new PrintWriter(
        socket.getOutputStream(), true);

    BufferedReader br = new BufferedReader(
        new InputStreamReader(System.in));

    String str;
    while (true) {
      System.out.print("Client: ");
      str = br.readLine();
      out.println(str);

      String reply = in.readLine();
      System.out.println("Server: " + reply);
    }
  }
}