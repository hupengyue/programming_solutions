
package java_study;


/*
*输入整数a和b（0≤a≤3000，1≤b≤3000），输出a/b的循环小数表示以及循环节长度。例
*如a=5，b=43，小数表示为0.(116279069767441860465)，循环节长度为21。
*20170418
* hpyps:
*
*/

 import java.io.*;
import java.math.BigDecimal;
import java.text.DecimalFormat;
import java.util.*;

public class java_study { 	
   public static void main(String[] args) throws IOException{
	   Scanner in = new Scanner(System.in);
	   double a,b;
	   int i=1, j=-1;
	   int P[] = new int[100];
	   P[0] = -1;
	   while(in.hasNext()){
		   a = in.nextDouble();
		   b = in.nextDouble();
		   BigDecimal a1 = new BigDecimal(Double.toString(a));
		   BigDecimal b1 = new BigDecimal(Double.toString(b));
		   BigDecimal result = a1.divide(b1, 100, BigDecimal.ROUND_HALF_UP);
		   String s = result.toString();
		   String ans = s.substring(2, s.length()-1);
		   for(;i<ans.length();++i){
			   while(j>=0 && ans.charAt(i) != ans.charAt(j+1)){
				   j = P[j];
			   }
			   if(ans.charAt(i) == ans.charAt(j+1)) {
				   if(j >= 7) break;
				   ++j;
			   }
			   P[i] = j;
		   }
		   System.out.println(ans);
		   System.out.print("0.("+ans.substring(0, i - j-1) +")");
	   }
	   in.close();
	   
   }
   
}