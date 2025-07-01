public class App {
    public static void main(String[] args) throws Exception {
        
         Animal ac=new Cat();
         ac.sound();

         Animal ad=new Dog();
         ad.sound();
         ad.walk();

         System.out.println(ad.a);

         Dog d=new Dog();
         System.out.println(d.a);
    }
}

class Animal
{
    int a=2;
    void  walk()
    {
        System.out.println("Animal move...");
    }
    void sound()
    {

    }
}

class Cat extends Animal
{
    void sound()
    {
       System.out.println("meoaww.....");
    }
}

class Dog extends Animal
{
    void sound()
    {
        System.out.println("Barkk.....");
    }
    int a=10;
}