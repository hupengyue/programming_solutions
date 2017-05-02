
package java_study;
/*
*如果x加上x的各个数字之和得到y，就说x是y的生成元。给出n（1≤n≤100000），求最小
*生成元。无解输出0。例如，n=216，121，2005时的解分别为198，0，1979。
*20170402
* hpyps:
*调试出正在得到正确答案的程序为准，只要没得到正确的答案，
*就说明你的逻辑多少存在问题
*
*/

 import java.io.*;
import java.util.function.Consumer;
import java.util.function.Predicate;
import java.util.*;

public class java_study {   
	

   public static void main(String[] args) throws IOException{
		   Map<Integer, Integer> gen = new HashMap<>();
		   int inp=0;
		   Scanner in = new Scanner(System.in);
		   for(Integer i=198; i<208 ; ++i){
		   //gen = establishGen(i, gen);
			   Integer key =i;
			   Integer value=i;
			   while(value > 0){
				   key= key+(value%10);
				   value = value / 10;
				   
			   }
			   //核心代码段：
			   if(gen.get(key) == null || i<gen.get(key)){
				   gen.put(key, i);
				    
			   }			   
		   }
		   while(in.hasNext()){
		   inp = in.nextInt();
		   System.out.println( gen.get(inp)==null? 0 : gen.get(inp));
		   }
		   in.close();

   }
}
