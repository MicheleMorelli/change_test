public class Change{
    public static void main(String[] argv){
    
    double to_be_paid = Double.parseDouble(argv[0]);
    double coin_used = Double.parseDouble(argv[1]);
    double[] c_or_p = {100, 50, 20, 10, 5, 2, 1, 0.5,0.2,0.1, 0.05, 0.02, 0.01};
    coin_used -= to_be_paid;

    for(int i = 0; i < c_or_p.length; i++){
        while ((coin_used - c_or_p[i]) >= 0){
            coin_used -= c_or_p[i];
            System.out.format("%.2f\n", c_or_p[i]);
        }
    }
        
    }
}
