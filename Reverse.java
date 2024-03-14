import java.util.*;
class Reverse{
    public static void main(String[] args) {
        int temp=0;
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        while(n!=0){
            int r= n%10;
         temp= temp*10+ r;
         n=n/10;
        }
        System.out.println(temp);

    }
}