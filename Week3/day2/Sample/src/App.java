

class Display
{
   void hai(String s)
   {
    System.out.println("hai "+s);
   }

   void addexclamation(String s)
   {
    System.out.println(s+" !!");
   }
}


public class App {

    public static void main(String arg[])
    {
        int res;
        Display d1=new Display();
        d1.hai("soorya");

        String name="sree";
        
        System.out.println(name.toUpperCase());

        d1.addexclamation("sree");

        Factorial f1=new Factorial();

        res=f1.fact(5);
        System.out.println(res);

        
    }
}
