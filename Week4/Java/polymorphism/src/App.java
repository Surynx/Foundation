public class App {
    public static void main(String[] args) throws Exception {
        
        Rectangle r=new Rectangle();
        r.area(5);
        r.area(1, 2);

        
       
    }
}

class Shape
{

    Shape()
    {
        System.out.println("Cons shape");
    }
    void area(int r)
    {
       System.out.println("Hai");
       
    }

     void area(int r,int a)
    {
       System.out.println("Hai2");
       
    }
}

class Rectangle extends Shape
{
    Rectangle()
    {
        System.out.println("Cons rectangle");
    }
    void area(int r)
    {
        super.area(5);
        System.out.println(r*r);
    }
}

class Circle extends Shape
{
    void area(int r)
    {
        int a=3*(r*r);
        System.out.println(a);
    }
}


