#include<stdio.h>
#include<stdlib.h>
int main()
	{
	  int cost,dif,total=0;
	  float p=50;
	  scanf("%d %d",&cost,&p);
	  while(cost>=1)
	    {
	    total=total+cost;
	    dif=cost*(p/100);
	    if(dif==0)
	    break;
	    cost=cost-dif;
	    }
	    printf("%d",total);
	  
	  return 0;
	}
