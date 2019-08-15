import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;

public class IntegerInquiry{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		BigInteger sum = BigInteger.ZERO;
		BigInteger n = in.nextBigInteger();
		while(n.compareTo(BigInteger.ZERO) != 0){
				sum = sum.add(n);
				n = in.nextBigInteger();
		}
		System.out.println(sum);
	}
}