// Server Side

import java.io.*;
import java.net.*;

public class ChatServer {
    public static void main(String args[]) throws Exception {

        ServerSocket server = new ServerSocket(68);
        System.out.println("Server started. Waiting for client...");

        Socket socket = server.accept();
        System.out.println("Name: Giridhar");
        System.out.println("Roll No: 36");
        System.out.println("Client connected.");

        BufferedReader in = new BufferedReader(
                new InputStreamReader(socket.getInputStream()));

        PrintWriter out = new PrintWriter(
                socket.getOutputStream(), true);

        BufferedReader br = new BufferedReader(
                new InputStreamReader(System.in));

        String str;

        while (true) {
            str = in.readLine();
            System.out.println("Client: " + str);

            System.out.print("Server: ");
            String reply = br.readLine();
            out.println(reply);
        }
    }
}