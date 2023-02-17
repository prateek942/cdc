import java.util.*;
public class BitManipulation{
    public static void OddorEven(int n){
        int bitMask=1;
        if((n&bitMask)==0){
            //even
            System.out.println("even number");
        }
        else{
            System.out.println("odd number");
        }
        }
        public static void main(String arg[]){
            OddorEven(5);
            OddorEven(11);
            OddorEven(22);
        }
    }
