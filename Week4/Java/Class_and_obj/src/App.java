public class App {
    public static void main(String[] args) throws Exception {
        
        Car c1=new Car("Alto","Red",2007);
        c1.display();

        Car c2=new Car("Hyndai","White",2024);
        c2.display();
    }
}


class Car
{
    String model;
    String color;
    int year;

    Car(String model,String color,int year)
    {
        this.model=model;
        this.color=color;
        this.year=year;
    }

    void display()
    {
        System.out.println("X---------X");
        System.out.println("Model:"+model);
        System.out.println("color:"+color);
        System.out.println("year:"+year);
        System.out.println("X---------X");
    }
}
