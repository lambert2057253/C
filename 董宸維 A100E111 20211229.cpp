/******************************************************************************/
/*****************************************************************************/
/*                   董宸維  A100E111  2021/12/29                           */
/***************************************************************************/
#include <stdio.h>
#include <stdlib.h>
enum STATE{
    RUNNING = 49,    //'1' 
    STOPPED = 50,  //'2' 
    FAILED = 51,  //'3' 
    HIBERNATING = 52,//'4' 
    WARM_UP =53   //'5' 
};

int main(void) {
     int input1;
    
    printf("RUNNING = %d\n",RUNNING);
    printf("STOPPED = %d\n",STOPPED);
    printf("FAILED = %d\n",FAILED);
    printf("HIBERNATING = %d\n",HIBERNATING);
    printf("WARM_UP = %d\n",WARM_UP);
    
    while(1)
	 {
		if(input1 !=10)//不等於Enter的時候才會進來 
		{
  			printf("請輸入[1-5]: ");
  		}
	  	input1 = getchar();//緩衝區 有了這個就不用 用scanf("%d",&input1)了 
	  	switch(input1)
	  	{      
	  	case  RUNNING://運行中 
	    	printf("運行中\n");
	    	break;
	   	case  STOPPED://停機 
	    	printf("停機\n");
	    	break;
	   	case  FAILED://失敗 
	    	printf("失敗\n");
	    	break;
	   	case WARM_UP://熱機
	   	case  HIBERNATING://待機 
	    	printf("待機 或 熱機 \n");
	    	break;
	   	case 10://Enter鍵不會理會 
	     	break;
	   	default:
	    	printf("我看不懂喔!!!掰掰");
	        return 0;     
		} 
		if(input1 !=10)//不等於Enter的時候才會進來 
		{
			system("pause");//暫停跟下面是一樣的 
							//getch();跟cin.get();
		}
	  
	 }


    return 0;
}
