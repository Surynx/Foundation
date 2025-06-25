public class App extends Thread {
     String s;
     
     App(String s)
     {
       this.s=s;
     }
     
     public void run()
     {
       for(int i=0;i<10;i++)
       {
         System.out.println(s);
         try {
           Thread.sleep(1000);
         } catch(Exception e) {
           
           System.out.println("Something went wrong !");
         }
       }
     }
     
     public static void main (String[] args) {
       App t1=new App("File downlod ....!");
       App t2=new App("Listnenig music....");
       App t3=new App("Playing Games !!");
       
       t1.start();
       t2.start();
       t3.start();
      
     }
}
