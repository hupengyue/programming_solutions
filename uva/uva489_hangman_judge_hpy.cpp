import java.io.*;
import java.util.*;

/*
*刽子手游戏其实是一款猜单词游戏，如图4-
1所示。游戏规则是这样的：计算机想一个单词
让你猜，你每次可以猜一个字母。如果单词里有
那个字母，所有该字母会显示出来；如果没有那个字母，则计算机会在一幅“刽子手”画上填一笔。这幅画一共需要7笔就能完成，因此你最多只能错6次。注意，猜一个已经猜过的字母也算错。
在本题中，你的任务是编写一个“裁判”程序，输入单词和玩家的猜测，判断玩家赢了（You win.）、输了（You lose.）还是放弃了（You chickened out.）。每组数据包含3行，第1行是游戏编号（-1为输入结束标记），第2行是计算机想的单词，第3行是玩家的猜测。后两行保证只含小写字母。
*20170426
* hpyps:
*注意某些变量声明和初始化的时间。eg：从inp取一个字符eg：c，bad就表示c是否在ans中出现过。idx表示出现的索引。从inp取下一个字符时，就应该重新初始化了
*/

public class Main {
	public static void main(String args[]) throws IOException
	{	
		Scanner in = new Scanner(System.in);
		String ans,inp;
		int win=0,lose = 0;
		int rnd,wTimes = 6;
		int left=0;
		char cAns[];
		
		while(in.hasNext()){
			rnd = in.nextInt();
			ans = in.next();
			inp = in.next();
			cAns = ans.toCharArray();
			left = ans.length();
			
			for(int i = 0; i<inp.length();++i){
				int bad =1;
				int idx = -1;
				//找到了
				do{					
					idx = ans.indexOf(inp.charAt(i),idx + 1);					
					if(idx != -1) {--left;cAns[idx] = ' ';bad = 0;}
				}while(idx != -1);				
				if(bad == 1) --wTimes;
				if(left == 0) win = 1;
				if(wTimes == 0) lose = 1;					
				if(win ==1 || lose == 1) break;
			}
			System.out.println("Round " + rnd);
			if(win == 1)System.out.print("You win.\n");
			else if(lose == 1)
				System.out.println("You lose.\n");
			else 
				System.out.println("You chickened out.\n");
			  
		}
		   		   	   
		   in.close();
	}
}