#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//using namespace std;

int main()
{ 
BEGIN: //語法 
			char inputchar_2;//宣告字串或字元 (inputchar只是代表"輸入宣告的字元或字串"，可以換成任意的字元，比如 YESorNO ) 
			char Score='%d';
			{
			printf("嗨廢物大學生，請輸入妳的微積分成績~~");
			scanf("%d",&Score);
	////
				if(Score>=0)
				switch(Score/10)
				{
					case 9:
    				printf("恭喜恭喜!!妳的成績為A等，恭喜通過~~\n");
    					goto CONTINUE;                                              //goto 是強制跳躍的意思 
					return 0;//直接跳出迴圈，且不會繼續執行迴圈外的程式 
		
					case 8:
					printf("妳的成績為B等，恭喜通過~~\n");
						goto CONTINUE;
					return 0;//直接跳出迴圈後，會執行迴圈外的程式 
		
					case 7:
					printf("妳的成績為C等，恭喜通過~~\n");
					    goto CONTINUE;
					return 0;
		
					case 6:
					printf("妳的成績為D等，恭喜通過~~\n");
						goto CONTINUE;
					return 0;
	    
					case 5:
					printf("妳的成績為E等，恭喜通過~~\n");
					    goto CONTINUE;
					return 0;
		
					default: //default
					printf("妳的成績為F等....重修吧~~\n");	
		              	goto CONTINUE;		
 				}
    		}
	////
	/*....成績等第程式撰寫處....*/
	////
			if (Score<50) 
			printf("你被當囉 ~ ~\n");
				do
				{
				printf("要重修嗎 ~ ??(y/n)");
				inputchar_2=getchar();
				getchar();//如果只想取得使用者輸入的字元，則可以使用 getchar
				break;//打完y or n以後，直接終止程式 
				} 
				while((inputchar_2!='y') and (inputchar_2!='n'));
				printf("找助教討論吧 ~ \n");
	
			/*system("pause");*/
CONTINUE: //隨便設的 
	        		char inputchar_3;
					do
					{
					printf("重新查詢成績嗎?(Y/N)");
					inputchar_3=getchar();	
					getchar();
					break;
	        		}
					while((inputchar_3!='Y') and (inputchar_3!='N'));
					goto BEGIN;
					system("pause");
				//continue;
}

