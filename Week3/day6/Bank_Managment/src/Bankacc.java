public class Bankacc {

     private int accno;
     private String name;
     private double balance;

     Bankacc(int accno,String name,double balance)
     {
        this.accno=accno;
        this.name=name;
        this.balance=balance;
     }

     void deposit(double d)
     {
        balance+=d;
     }

     void withdraw(double w)
     {
        if(w<balance){
        balance-=w;
        }

        
        else{
            System.out.println("Dont have enough money...!");
        }
     }

     void balance()
     {
        System.out.println("Balance Amount:"+balance);
     }

     void display()
     {
        System.out.println("x----------------x");
        System.out.println("Account number:"+accno);
        System.out.println("Account Holder:"+name);
        System.out.println("Balance Amount:"+balance);
        System.out.println("x----------------x");
     }



   

}
