#include<stdio.h>
void  x(){
	int k;
do{

	char i = '%';
	int x,y,sum;
	printf(" enter first number :");
	scanf("%d",&x);
	printf(" enter second  number :");
	scanf("%d",&y);
	printf("press 1 for +\n");
	printf("press 2 for -\n");
	printf("press 3 for *\n");
	printf("press 4 for /\n");
	printf("press 5 for %c\n",i);
	printf("press 0 for exit\n");
    scanf("%d",&k);
    switch(k){
    	case 1 : printf("you chose for addition\n");
    	        printf("additon is %d\n",x+y);
    	        break;
    	case 2 : printf("you chose for subraction\n");
    	        printf("subraction is %d\n",x-y);
    	        break;
    	 
    	case 3 : printf("you chose for multiplication\n");
    	        printf("multiplication is %d\n",x*y);
    	        break;
    	    
    	case 4 : printf("you chose for division\n");
    	        printf("division is %d\n",x/y);
    	        break;
    	case 5 : printf("you chose for remainder \n");
    	        printf(" remainder is %d\n",x%y);
    	        break;    
		case 0 : break;		    
    	    };
    	}
    	while(k!=0);
    	}
main(){
       x();
	
	
}
