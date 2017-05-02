
package java_study;


/*
*题目
*把前n（n≤10000）个整数顺次写在一起：123456789101112…
*数一数0～9各出现多少次
*（输出10个整数，分别是0，1，…，9出现的次数）。
*20170331
* hpyps:
*
*/

 import java.io.*;
import java.util.*;

public class java_study {
	public static void main(String[] args) throws IOException{
		Scanner in = new Scanner(System.in);
		   String inp;
		   int out[] = new int[10];		   
		   while(in.hasNext()){
			   inp = in.next();
			   for(int i=0; i<inp.length();++i){
				   char num = inp.charAt(i);				   
				   ++out[num - '0'];
			   }
			   System.out.println(out);
		   }
		   
		   in.close();
	}
}