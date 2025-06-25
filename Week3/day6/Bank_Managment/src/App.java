import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        
        Scanner s=new Scanner(System.in);

        System.out.println("Welcome to SBI.....");

        System.out.println("Enter your ACCNo:");
        int accno=s.nextInt();

        System.out.println("Enter your name:");
        String name=s.next();

        System.out.println("Enter a initial Amount:");
        double balance=s.nextDouble();

        System.out.println("Account created.......");
        
        Bankacc acc=new Bankacc(accno, name, balance);

        
        int choice;
        do
        {
            
            System.out.println("x----------------x\n1-->Deposit\n2-->Withdraw\n3-->Current Balance\n4-->Acc Details\n5-->Exit !!\nEnter Your Choice:\nx----------------x");
            choice=s.nextInt();
            switch (choice) {
                case 1:
                    System.out.println("Enter Deposit amount:");
                    double d=s.nextDouble();
                    acc.deposit(d);
                    break;
                
                case 2:
                   System.out.println("Enter Withdraw amount:");
                   acc.withdraw(s.nextDouble());
                   break;

                case 3:
                   acc.balance();
                   break;
                
                case 4:
                   acc.display();
                   break;

                default:
                    if(choice !=5){
                    System.out.println("Choose a valid option !!");
                    }
                    break;

            }
        }while(choice !=5);

        System.out.println("Thank you.....!");
    }
}
