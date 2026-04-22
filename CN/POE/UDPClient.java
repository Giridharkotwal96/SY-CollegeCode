import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

class UDPClient{
    public static void main(String[] args) throws Exception{
        BufferedReader inFromUser = new BufferedReader(new InputStreamReader(System.in));
        DatagramSocket clientSocket = new DatagramSocket();
        InetAddress IPAddress = InetAddress.getByName("localhost");
        byte [] sendData = new byte[1024];
        byte [] receiveData = new byte[1024];
        System.out.println("Enter the number :- ");
        String number = inFromUser.readLine();
        sendData = number.getBytes();
        DatagramPacket sendPacket = new DatagramPacket(sendData, sendData.length,IPAddress,7000);
        clientSocket.send(sendPacket);
        DatagramPacket receivPacket = new DatagramPacket(receiveData, receiveData.length);
        clientSocket.receive(receivPacket);
        String reply = new String(receivPacket.getData()).trim();
        System.out.println("server reply :- "+reply);
        clientSocket.close();
    }
}
