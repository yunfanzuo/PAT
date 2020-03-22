//long long 存不下 20 位正整数，用 java 大数

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		int [] cnt1 = new int[10];
		int [] cnt2 = new int[10];
		BigInteger a = cin.nextBigInteger();
		BigInteger tmp = a;
		BigInteger m = BigInteger.valueOf(10);
		BigInteger l = BigInteger.valueOf(0);
		while(tmp.compareTo(l) != 0) {
			BigInteger t = tmp.mod(m);
			int dex1 = t.intValue();
			cnt1[dex1]++;
			tmp = tmp.divide(m);
		}
		BigInteger k = BigInteger.valueOf(2);
		a = a.multiply(k);
		tmp = a;
		while(tmp.compareTo(l) != 0) {
			BigInteger t = tmp.mod(m);
			int dex2 = t.intValue();
			cnt2[dex2]++;
			tmp = tmp.divide(m);
		}
		int flag = 0;
		for(int i = 0; i < 10; i++) {
			if(cnt1[i] != cnt2[i]) {
				flag = 1;
				break;
			}
		}
		if(flag == 1) System.out.println("No");
		else System.out.println("Yes");
		System.out.println(a);
	}
}
