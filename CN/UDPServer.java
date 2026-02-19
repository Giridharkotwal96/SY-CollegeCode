import java.io.*;
import java.net.*;

class UDPServer {
    public static void main(String[] args) throws Exception {

        DatagramSocket serverSocket = new DatagramSocket(7009);
        byte[] receiveData = new byte[1024];
        byte[] sendData = new byte[1024];

        System.out.println("Even-Odd Server running on port 7009...");

        while (true) {

            DatagramPacket receivePacket = new DatagramPacket(receiveData, receiveData.length);

            serverSocket.receive(receivePacket);

            String numStr = new String(receivePacket.getData()).trim();
            System.out.println("Received: " + numStr);

            InetAddress IPAddress = receivePacket.getAddress();
            int port = receivePacket.getPort();

            String response;

            try {
                int num = Integer.parseInt(numStr);

                if (num % 2 == 0)
                    response = num + " is EVEN";
                else
                    response = num + " is ODD";

            } catch (Exception e) {
                response = "Not a valid number ";
            }

            sendData = response.getBytes();

            DatagramPacket sendPacket = new DatagramPacket(sendData, sendData.length,
                    IPAddress, port);

            serverSocket.send(sendPacket);
        }
    }
}
