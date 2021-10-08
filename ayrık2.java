import java.util.Scanner;

/**
 *
 * @author melikekecelioglu
 */
public class ayrık2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      
        Scanner s = new Scanner(System.in);
        System.out.println("enter age");
        int age= s.nextInt();
        boolean b;
        System.out.println("enter a weight");
        int weight= s.nextInt();
        System.out.println("enter a heigth");
        int height= s.nextInt();
        
        if(age > 13 && age < 18){
            b= true;
        }
         if(weight > 50 || height > 60){
            b= true;
        }
          if(weight > 50 && height > 60){
            b= true;
        }
            if(weight > 50 ^ height > 60){
            b= true;
        }
        
    }
    
}
