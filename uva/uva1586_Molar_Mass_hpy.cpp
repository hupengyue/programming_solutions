
package java_study;


/*
*给出一种物质的分子式（不带括号），求分子量。本题中的分子式只包含4种原子，
*分别为C, H, O, N，原子量分别为12.01, 1.008, 16.00, 14.01
*（单位：g/mol）。例如，C6H5OH的分子量为94.108g/mol。
*20170404
* hpyps:
*密切注意s.charAt(i) 的i是否越界，越界抛出异常
*/

 import java.io.*;
import java.util.*;

public class java_study {
	public static void main(String[] args) throws IOException{
		Scanner in = new Scanner(System.in);
		   String inp;
		   double atomW[] = new double[128];
		   atomW['C'] = 12.01;
		   atomW['H'] = 1.008;
		   atomW['O'] = 16.00;
		   atomW['N'] = 14.01;
		   
		   double out=0,num;
		   while(in.hasNext()){
			   inp = in.next();
			   for(int i=0; i<inp.length();){
				   char ele = inp.charAt(i);
				   num = 0;
				   ++i;
				   //获取一个多位的数字
				   while(i!=inp.length() && inp.charAt(i) <= 57 && inp.charAt(i) >= 50){
					   num = num*10 + inp.charAt(i)-'0' ;
					   ++i;
				   }
				   if(num ==0) num = 1;
				   out += atomW[ele] * num;
			   }
			   System.out.println(out);
		   }
		   
		   in.close();
	}
}