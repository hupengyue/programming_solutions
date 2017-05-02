
package java_study;


/*
*
*有一个5*5的网格，其中恰好有一个格子是空的，其他格子各有一个字母。一共有4种指
*令：A, B, L, R，分别表示把空格上、下、左、右的相邻字母移到空格中。输入初始网格和指
*令序列（以数字0结束），输出指令执行完毕后的网格。如果有非法指令，应输出“This
*puzzle has no final configuration.”，例如，图3-5中执行ARRBBL0后，效果如图3-6所示。
*具体图片见《信息学竞赛》puzzle题目；P109
*20170404
* hpyps:
*二维数组的操作
*/

 import java.io.*;
import java.util.*;

public class java_study { 	
   public static void main(String[] args) throws IOException{
	   Scanner in = new Scanner (System.in);
	   String inp;
	   String[][] str = {{"T","R","G","S","J"},{"X","D","O","K","I"},
			   {"M"," ","V","L","N"},{"W","P","A","B","E"},{"U","Q","H","C","F"}};
	   int error =0;
	   
	   while(in.hasNextLine()){
		   inp = in.nextLine();
		   //空格的初始位置
		   int col=2,row=1;
		   for(int i=0; i<inp.length(); ++i){
			   switch(inp.charAt(i)){
			   case 65:
				   if( col ==0){
				   	error = 1;
				   	break;}
				   str[col][row] = str[col-1][row];
				   str[col-1][row] = " ";
				   --col;				   
				   break;
			   case 66:
				   if(col ==4){
					   error = 1;
					   break;
				   }
				   str[col][row]= str[col+1][row];
				   str[col+1][row] = " ";
				   ++col;
				   break;
			   case 76:
				   if(row ==0){
					   error = 1;
					   break;}
				   str[col][row] = str[col][row-1];
				   str[col][row-1] = " ";
				   --row;
				   break;
			   case 82:
				   if(row == 4){
					   error = 1;
					   break;}
				   str[col][row] = str[col][row+1];
				   str[col][row+1] = " ";
				   ++row;
				   break;
			   
			   case 48:
				   break;
		   }
		   }
		   if(error == 1){
			   System.out.println("Error: out of range!");
			   return ;
		   }
		   for(int i=0 ; i<str.length;++i){
			   for( int j=0; j<str[i].length; ++j)  System.out.print(str[i][j]+" ");   
			   System.out.println();
		   }
	   }
	   in.close();
   }
   
}