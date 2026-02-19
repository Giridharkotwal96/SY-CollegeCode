import java.io.*;
import java.net.*;

class UDPClient {
    public static void main(String[] args) throws Exception {

        BufferedReader inFromUser = new BufferedReader(new InputStreamReader(System.in));

        DatagramSocket clientSocket = new DatagramSocket();
        InetAddress IPAddress = InetAddress.getByName("localhost");

        byte[] sendData = new byte[1024];
        byte[] receiveData = new byte[1024];

        System.out.print("Enter a number: ");
        String number = inFromUser.readLine();
        sendData = number.getBytes();

        DatagramPacket sendPacket = new DatagramPacket(sendData, sendData.length,
                IPAddress, 7009);

        clientSocket.send(sendPacket);

        DatagramPacket receivePacket = new DatagramPacket(receiveData, receiveData.length);

        clientSocket.receive(receivePacket);

        String reply = new String(receivePacket.getData()).trim();

        System.out.println("Server: " + reply);

        clientSocket.close();
    }
}
