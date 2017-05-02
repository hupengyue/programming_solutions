
package java_study;


/*
*题目：
输入m个长度均为n的DNA序列，求一个DNA序列，到所有序列的总Hamming距离尽量
小。两个等长字符串的Hamming距离等于字符不同的位置个数，例如，ACGT和GCGA的
Hamming距离为2（左数第1, 4个字符不同）。
输入整数m和n（4≤m≤50, 4≤n≤1000），以及m个长度为n的DNA序列（只包含字母
A，C，G，T），输出到m个序列的Hamming距离和最小的DNA序列和对应的距离。
*20170418
* hpyps:
*
*/

 import java.io.*;
import java.util.*;

public class java_study { 	
   public static void main(String[] args) throws IOException{
	   Scanner in = new Scanner (System.in);
	   List<String> inp = new ArrayList<>();
	   while(in.hasNext()){
		   inp.add(in.next());
	   }
	   String mindna = minDNA(inp.size(),inp.get(0).length(),inp);
	   System.out.print(mindna);	   
	   in.close();	   
   }
   public static String minDNA(int m , int n, List<String> inp){
	   String out="";
	   char c;	   
	   String cc = "ACGT";	   
	   
	   for(int i=0; i<n;++i){
		   int[] cnt={0,0,0,0};
		   int max = 0;
		   
		   for(int j=0; j<m; ++j)
		   //非常简洁，将ACGT出现的次数对应的保存在cnt[0，1，2，3]中，而不是用switch/case
			   ++cnt[cc.indexOf(inp.get(j).charAt(i))];
			   
		 //求一个int[]中最大的数值,即：出现最多次的那个字符   
		   for(int k =1; k<4; ++k){			   
			   if(cnt[k] >= cnt[max]) max = k;
		   }
		   c = cc.charAt(max);
		   out+=c;		   
	   }
	   return out;	   
	   
   }
   
}