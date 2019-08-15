import java.math.BigDecimal;
import java.util.Scanner;

class HighPrecisionNumber{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		for(int i = 0;i<t;i++){
			BigDecimal ans = BigDecimal.ZERO;
			BigDecimal fis;
			do{
				fis = in.nextBigDecimal();
				ans = ans.add(fis);
			}while(fis.compareTo(BigDecimal.ZERO) != 0);

			ans = ans.stripTrailingZeros();
			System.out.println(ans);
		}
	}
}