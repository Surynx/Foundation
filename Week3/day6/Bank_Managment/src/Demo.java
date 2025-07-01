public class Demo {

 public static void main(String[] args) {
        final int i=1;
        
        System.out.println(i);
        advcalc obj=new advcalc();
        obj.show();
        obj.add(1, 2,5);
        
    }
}

class calc
{
    final void show()
    {
        System.out.println("soorya");
    }

   final void add(int a,int b)
    {
        System.out.println(a+b);
    }
}

class advcalc extends calc{
 void sho()
    {
        System.out.println("soorya");
    }
    final void add(int a,int b,int c)
    {
        System.out.println(a+b+c);
    }
}
