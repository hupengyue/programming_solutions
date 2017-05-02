
package java_study;



/*
*题目
*如果一个字符串可以由某个长度为k的字符串重复多次得到，则称该串以k为周期。
*例如，abcabcabcabc以3为周期（注意，它也以6和12为周期）。
*输入一个长度不超过80的字符串，输出其最小周期。
*20170418
* hpyps:
*两个游标，i，j。
*i遍历字符串。j指向i指向的周期的前面一个可能的周期。
*/

 import java.io.*;
import java.util.*;

public class java_study {
	public static int minPeriod(String s){
		int i=1,j = -1;
		int c[] = new int[100];
		c[0] = -1;
		for(;i<s.length();++i){
			while(j >= 0 && s.charAt(i) != s.charAt(j+1)){
				j = c[j];
			}
			if(s.charAt(i) == s.charAt(j+1)) ++j;
			c[i] = j;
			
		}
		return j;
	}
	public static void main(String[] args) throws IOException{
		Scanner in = new Scanner(System.in);
		String inp;
		int out=0;
		while(in.hasNext()){
			inp = in.nextLine();
			int l = inp.length();
			int p = minPeriod(inp);
			if(l%(l-p-1) !=0) out = l;
			else out = l-p-1;
			System.out.println(out);
		}		   
		in.close();
	}
}

/*
* hpyps:
*暴力枚举法
*2个游标，k，j依次指向每个小的分割的部分的各个字符
*/

public class java_study { 	
	public static int check(int i,int sz, String str){
		int result = 1;
		for(int j=0; j<i;++j){
			for(int k =j+i;k<sz; k+=i){
				if(str.charAt(k) !=str.charAt(j)) return 0;
			}
		}
		return result;
	}

   public static void main(String[] args) throws IOException{
	   Scanner in = new Scanner (System.in);
	   int out=0;
	   while(in.hasNext()){
		   String str = in.nextLine();
		   int sz = str.length();
		   for(int i =1 ;i<= sz;++i){
			   if(sz%i ==0){
				   if(check(i,sz,str)==1){
				   out = i;
				   
				   break;
				   }
			   }
		   }
	   }
	   
	   System.out.print(out);
   }
}


package java_study;


/*
*信息学竞赛periodic string题目；P94
*20170404
* hpyps:
*更高级的代码
*/

 import java.io.*;
import java.util.*;

public class java_study { 	
   public static void main(String[] args) throws IOException{
	   Scanner in = new Scanner (System.in);
	   int out=0;
	   while(in.hasNext()){
		   String str = in.nextLine();
		   int sz = str.length();
		   int j=0;
		   for(int i =1 ;i<= sz;++i){
			   if(sz%i ==0){
				   for(j =i; j<sz; j++){
					   if(str.charAt(j) != str.charAt(j%i)) break;
				   }
				   if(j ==sz){
					   
					   out = i;
					   break;
				   }
					   
			   }
		   }
	   }
	   
	   System.out.print(out);
   }
}