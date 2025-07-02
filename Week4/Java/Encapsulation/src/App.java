public class App {
    public static void main(String[] args) throws Exception {

        Student s1=new Student();
        Student s2=new Student();
        s1.setter(1, "soorya", 'A');
        s2.setter(2, "sree", 'A');

        s1.getter();
        s2.getter();
        
    }
}

class Student
{
    private int roll_num;
    private String name;
    private char grade;
    
    void setter(int roll_num,String name,char grade)
    {
         this.roll_num=roll_num;
         this.name=name;
         this.grade=grade;
    }

    void getter()
    {
        System.out.println("roll no:"+roll_num+"\nname:"+name+"\ngrade:"+grade+"\nX--------X");
    }

}
