import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

class UDPServer {
    public static void main(String[] args) throws Exception{
        DatagramSocket serverSocket=new DatagramSocket(7000);
        byte [] receiveData = new byte[1024];
        byte [] sendData = new byte[1024];
        System.out.println("Even odd server is on port 7000...");
        while(true){
            DatagramPacket receivePacket = new DatagramPacket(receiveData, receiveData.length);
            serverSocket.receive(receivePacket);
            String numStr = new String(receivePacket.getData()).trim();
            System.out.println("Received :- "+numStr);
            InetAddress IPAddress = receivePacket.getAddress();
            int port = receivePacket.getPort();
            String response;
            try{
                int num = Integer.parseInt(numStr);
                if(num%2==0)
                    response = num + " is Even";
                else
                    response = num + " is Odd";
            }
            catch(Exception e){
                response = "Invalid number";
            }
            sendData = response.getBytes();
            DatagramPacket sendPacket = new DatagramPacket(sendData, sendData.length, IPAddress, port);
            serverSocket.send(sendPacket);
        } 
    }    
}
