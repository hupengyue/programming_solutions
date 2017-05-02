
package java_study;


/*
*给定6个矩形的长和宽wi和hi（1≤wi，hi≤1000），
*判断它们能否构成长方体的6个面。
*20170420
* hpyps:
* 实现对一个类的排序，class Pair implements Comparator{}
*/

 import java.io.*;
import java.math.BigDecimal;
import java.text.DecimalFormat;
import java.util.Set;
import java.util.*;

public class Main { 	
   public static void main(String[] args) throws IOException{
	   Scanner in = new Scanner(System.in);
	   int isRect =1;
	   List<Pair> D = new ArrayList<Pair>();
	   Set<Integer> S = new HashSet<>();
	   int x,y;
	   while(in.hasNext()){		   
		   x=in.nextInt();
		   y = in.nextInt();
		   D.add(new Pair(Math.min(x, y),Math.max(x, y)));
	   }
	   //使用自己定义的排序规则
	   Collections.sort(D,new Pair());
	   for (Pair p:D){
		   S.add(p.getX());
		   S.add(p.getY());
	   }
	   isRect &= D.get(0).equals(D.get(1));
	   isRect &= D.get(2).equals(D.get(3));
	   isRect &= D.get(4).equals(D.get(5));
	   if(S.size() > 3) isRect = 0;
	   System.out.println(isRect == 1 ? "POSSIBLE":"IMPOSSIBLE");	   
	   in.close();	   
   }   
}

class Pair implements Comparator<Pair>{
	private int x;
	private int y;
	public int getX(){return x;}
	public int getY() {return y;}
	
	public Pair(int x,int y){
		this.x = x;
		this.y = y;
	}
	public Pair(){}
	
	public int compare(Pair p1, Pair p2){
		if(p1.x != p2.x) return p1.x -p2.x;
		return p1.y - p2.y;
	}
	public int equals(Pair p1){
		return ((p1.x == this.x && p1.y == this.y) ? 1 :0); 
	}
}