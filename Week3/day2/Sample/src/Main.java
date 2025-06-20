

class Cars
{
    String name;
    long year;
    String model;

    void display(String s)
    {
       System.out.println(s);
    }
}





public class Main {
public static void main(String arg[])
{
   
   Cars c1=new Cars();


   c1.name="Hyundai";
   c1.model="i20";
   c1.year=2023;
   
   c1.display(c1.name);
 

}
}