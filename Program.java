import java.util.Scanner;


class heartrates{
    int dobyear;
    String dobmonth;
    int dobday;
    String fname;
    String lname;



    heartrates(int y, String m , int d,String  f, String l){
        dobyear=y;
        dobmonth=m;
        dobday=d;
        fname=f;
        lname=l;
    }

       void display() {
        System.out.println("Name: " + fname + " " + lname);
        System.out.println("DOB: " + dobday + " " + dobmonth + " " + dobyear);
    }
}


    class Main{
        public static void main (String args[]) {
            Scanner sc = new Scanner(System.in);

           
            heartrates [] dil = new heartrates[5];

 for(int i=0;i<dil.length;i++){
    System.out.println("Enter year: ");
    int y = sc.nextInt();
    System.out.println("Enter month");
    String m=sc.next();
    System.out.println("Enter day");
    int d = sc.nextInt();
    System.out.println("Enter fname");
    String f=sc.next();
    System.out.println("Enter lname");
    String l=sc.next();

    dil[i]=new heartrates(y,m,d,f,l);
    System.out.println();

            }

    for(int i=0;i<dil.length;i++) {
        dil[i].display();
    }

           
        }



}