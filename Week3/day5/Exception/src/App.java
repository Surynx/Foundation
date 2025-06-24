public class App {
    public static void main(String[] args) throws Exception {
        
        int num1=4,num2=0;
        
        try
        {
            int div=num1/num2;
        }
        catch(ArithmeticException e)
        {
            System.out.println("Dividing zero:"+e);
        }
        finally
        {
            System.out.println("Thank you....");
        }
    }
}
