// Client Side

import java.io.*;
import java.net.*;

public class ChatClient {
    public static void main(String args[]) throws Exception {

        Socket socket = new Socket("localhost", 68);
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