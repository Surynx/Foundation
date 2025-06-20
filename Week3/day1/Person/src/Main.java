package day1.Person.src;

public class Main {
    public static void main(String arg[])
    {
        Person p1=new Person();
        Person p2=new Person();

        p1.name="soorya";
        p1.age=20;

        p2.name="sree";
        p2.age=18;

        p1.display(p1.name,p1.age);
        p2.display(p2.name,p2.age);
    }
}
