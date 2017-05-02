
package java_study;


/*
*给定两个长度相同且不超过100的字符串，判断是否能把其中一个字符串的各个字母重
*排，然后对26个字母做一个一一映射，使得两个字符串相同。例如，JWPUDJSTVP重排后可
*以得到WJDUPSJPVT，然后把每个字母映射到它前一个字母（B->A, C->B, …, Z->Y, 
*A->Z），得到VICTORIOUS。输入两个字符串，输出YES或者NO。
*20170420
* hpyps:
*
*/

 import java.io.*;
import java.math.BigDecimal;
import java.text.DecimalFormat;
import java.util.Set;
import java.util.*;

public class java_study { 
   public static void main(String[] args) throws IOException{
	   Scanner in = new Scanner(System.in);
	   String s1,s2;
	   boolean isOk = true;
	   int c1[]=new int[26];
	   int c2[] = new int[26];
	   while(in.hasNext()){
		   s1 = in.next();
		   s2 = in.next();
		   for(int i=0; i<s1.length();++i){
			   ++c1[s1.charAt(i)-'A'];
		   }
		   for(int j =0; j<s2.length();++j){
			   ++c2[s2.charAt(j)+1 - 'A'];
		   }
		   for(int k =0;k<26;++k)
			   if(c1[k] != c2[k]){
				   isOk = false;
				   break;
			   }
		   System.out.println(isOk ? "YES" :"NO");
	   }
	   
	   	   
	   in.close();	   
   }   
}
