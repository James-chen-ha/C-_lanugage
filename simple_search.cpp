#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//using namespace std;

int main()
{ 
BEGIN: //�y�k 
			char inputchar_2;//�ŧi�r��Φr�� (inputchar�u�O�N��"��J�ŧi���r���Φr��"�A�i�H�������N���r���A��p YESorNO ) 
			char Score='%d';
			{
			printf("�ټo���j�ǥ͡A�п�J�p���L�n�����Z~~");
			scanf("%d",&Score);
	////
				if(Score>=0)
				switch(Score/10)
				{
					case 9:
    				printf("���߮���!!�p�����Z��A���A���߳q�L~~\n");
    					goto CONTINUE;                                              //goto �O�j����D���N�� 
					return 0;//�������X�j��A�B���|�~�����j��~���{�� 
		
					case 8:
					printf("�p�����Z��B���A���߳q�L~~\n");
						goto CONTINUE;
					return 0;//�������X�j���A�|����j��~���{�� 
		
					case 7:
					printf("�p�����Z��C���A���߳q�L~~\n");
					    goto CONTINUE;
					return 0;
		
					case 6:
					printf("�p�����Z��D���A���߳q�L~~\n");
						goto CONTINUE;
					return 0;
	    
					case 5:
					printf("�p�����Z��E���A���߳q�L~~\n");
					    goto CONTINUE;
					return 0;
		
					default: //default
					printf("�p�����Z��F��....���קa~~\n");	
		              	goto CONTINUE;		
 				}
    		}
	////
	/*....���Z���ĵ{�����g�B....*/
	////
			if (Score<50) 
			printf("�A�Q���o ~ ~\n");
				do
				{
				printf("�n���׶� ~ ??(y/n)");
				inputchar_2=getchar();
				getchar();//�p�G�u�Q���o�ϥΪ̿�J���r���A�h�i�H�ϥ� getchar
				break;//����y or n�H��A�����פ�{�� 
				} 
				while((inputchar_2!='y') and (inputchar_2!='n'));
				printf("��U�аQ�קa ~ \n");
	
			/*system("pause");*/
CONTINUE: //�H�K�]�� 
	        		char inputchar_3;
					do
					{
					printf("���s�d�ߦ��Z��?(Y/N)");
					inputchar_3=getchar();	
					getchar();
					break;
	        		}
					while((inputchar_3!='Y') and (inputchar_3!='N'));
					goto BEGIN;
					system("pause");
				//continue;
}

