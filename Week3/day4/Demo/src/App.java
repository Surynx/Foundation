class Product
{
    private String product_name;
    private double price; 

    //setter
    void setname(String product_name)
    {
        this.product_name=product_name;
    }

    void setprice(double price)
    {
        this.price=price;
    }

    //getter
    String getname()
    {
       return product_name;
    }

    double getprice()
    {
        return price;
    }

    
}







public class App {
    public static void main(String[] args) throws Exception {
        Product p=new Product();

        p.setname("soap");
        p.setprice(20.80);

        System.out.println(p.getname());
        System.out.println(p.getprice());
    }
}
