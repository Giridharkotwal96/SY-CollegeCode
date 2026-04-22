import java.io.*;
import java.net.*;

public class TCPEADClient {
   public static void main(String[] args) {
        try {
            Socket s = new Socket("localhost", 7777);

            DataInputStream dis = new DataInputStream(s.getInputStream());
            DataOutputStream dos = new DataOutputStream(s.getOutputStream());
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

            System.out.println("Connected to server");
            System.out.print("Enter the key value (1-25): ");
            int key = Integer.parseInt(br.readLine());

            while (true) {
                // Send and Encrypt
                System.out.print("Enter message to send: ");
                String msg = br.readLine();

                dos.writeUTF(encrypt(msg, key));
                dos.flush();

                // Receive and Decrypt
                String encryptedInput = dis.readUTF();
                System.out.println("Received (Encrypted): " + encryptedInput);
                System.out.println("Server says (Decrypted): " + decrypt(encryptedInput, key));
            }

        } catch (IOException e) {
            System.out.println("Connection error: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("Invalid key value: " + e.getMessage());
        }
    }

    // Encryption
    public static String encrypt(String text, int s) {
        StringBuilder result = new StringBuilder();

        for (char character : text.toCharArray()) {
            if (Character.isUpperCase(character)) {
                char ch = (char) ((int) character + s - 65) ;
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

