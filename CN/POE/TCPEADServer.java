import java.io.*;
import java.net.*;

class TCPEADServer {
    public static void main(String[] args) {
        try {
            ServerSocket ss = new ServerSocket(7777);
            System.out.println("Server is listening on port 7777");

            Socket s = ss.accept();
            System.out.println("Client connected");

            DataInputStream dis = new DataInputStream(s.getInputStream());
            DataOutputStream dos = new DataOutputStream(s.getOutputStream());
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

            System.out.print("Enter the key value (1-25): ");
            int key = Integer.parseInt(br.readLine());

            while (true) {
                // Receive and Decrypt
                String encryptedInput = dis.readUTF();
                System.out.println("Received (Encrypted): " + encryptedInput);
                System.out.println("Client says (Decrypted): " + decrypt(encryptedInput, key));

                // Send and Encrypt
                System.out.print("Enter message to send: ");
                String msg = br.readLine();

                dos.writeUTF(encrypt(msg, key));
                dos.flush();
            }

        } catch (Exception e) {
            System.out.println("Connection closed.");
        }
    }

    // Encryption
    public static String encrypt(String text, int s) {
        StringBuilder result = new StringBuilder();

        for (char character : text.toCharArray()) {
            if (Character.isUpperCase(character)) {
                char ch = (char) ((int) character + s - 65);
                ch = (char) (ch % 26 + 65);
                result.append(ch);
            } else if (Character.isLowerCase(character)) {
                char ch = (char) ((int) character + s - 97);
                ch = (char) (ch % 26 + 97);
                result.append(ch);
            } else {
                result.append(character);
            }
        }
        return result.toString();
    }

    // Decryption
    public static String decrypt(String text, int s) {
        return encrypt(text, 26 - (s % 26));
    }
}