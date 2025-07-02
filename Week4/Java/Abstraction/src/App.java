public class App {


    public static void main(String arg[])
    {
    Animal d,c;

    d=new Dog();
    c=new Cat();

    d.eat();
    c.eat();

    d.sleep();
    c.sleep();
    }


    
}


interface Animal
{
    void eat();
    void sleep();
}

class Cat implements Animal
{
    public void eat()
    {
        System.out.println("Cat is eating..");
    }

    public void sleep()
    {
        System.out.println("Cat is sleeping...");
    }
}

class Dog implements Animal
{
    public void eat()
    {
        System.out.println("Dog is eating..");
    }

    public void sleep()
    {
        System.out.println("Dog is sleeping...");
    }
}
