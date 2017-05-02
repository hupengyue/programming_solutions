
package java_study;


/*
*题目：
*给出一个由O和X组成的串（长度为1～80），统计得分。
*每个O的得分为目前连续出现的O的个数，X的得分为0。
*例如，OOXXOXXOOO的得分为1+2+0+0+1+0+0+1+2+3。
*20170331
* hpyps:
*每个字符只有2种情况，即：O，或者 X。
*对于只有两种选择的0/1情况，用表达式：“？：”更为简洁
*/

 import java.io.*;
import java.util.*;

public class java_study { 	

   public static void main(String[] args) throws IOException{
		   Scanner in = new Scanner(System.in);
		   String inp;
		   int cntO=0,out=0;
		   while(in.hasNext()){
			   inp = in.next();
			   for(int i=0; i<inp.length(); ++i){
			   	//对于只有两种选择的0/1情况，用表达式：“？：”更为简洁
			   	cntO = (inp.charAt(i) == 'O') ? cntO+1:0;
			   	out +=cntO;
			   }
			   
		   }
		   System.out.println(out);
		   in.close();
   }
}
