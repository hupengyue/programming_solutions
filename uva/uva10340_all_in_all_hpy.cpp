
package java_study;


/*
*输入两个字符串s和t，判断是否可以从t中删除0个或多个字符（其他字符顺序不变），
*得到字符串s。例如，abcde可以得到bce，但无法得到dc。
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
	   String t,s;
	   int isSubUnit = 0;
	   while(in.hasNextLine()){
		   int j =0;
		   t = in.nextLine();
		   s = in.nextLine();
		   for(int i = 0; i<t.length();++i){
			   if(t.charAt(i) == s.charAt(j) ) 
				   ++j;
			   if(j == s.length()){
				   isSubUnit = 1;
				   break;
			   }
		   }
		   if(j < s.length()) isSubUnit = 0;
		   System.out.println((isSubUnit == 0 ? "NO":"YES"));
	   }
	   
	   in.close();
	   
   }
   
}