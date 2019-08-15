import java.math.BigInteger;
import java.util.Scanner;

class VeryEasy{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while(in.hasNext()){
			int n = in.nextInt();
			int a = in.nextInt();
			BigInteger res = BigInteger.ZERO;
			
			for(int i = 1; i<=n; i++){
				BigInteger mult = BigInteger.valueOf(a);
				mult = mult.pow(i);
				mult = mult.multiply(BigInteger.valueOf(i));
				res = res.add(mult);
			}
			System.out.println(res);		
		}
	}
}