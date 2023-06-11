#include<stdio.h>

#include<conio.h>

typedef struct process

{

  int bt,wt,tt,no,prio;

}prcs;

int main()

{ prcs p[10],t;

  float avg_w,avg_t;

  int i,j,k,ch,n,qntm,c;



  do

  {  printf("\n---------- FCFS ----------\n");

     printf("\n\n1-FCFS");

     

     printf("\nEnter ur choice:\t");

     scanf("%d",&ch);

     switch(ch)

     {   case 1:

	   printf("\nEnter no. of processes:\t");

	   scanf("%d",&n);

	   for(i=0;i<n;i++)

	   {  printf("Enter burst time for P%d:  ",i+1);

	      scanf("%d",&p[i].bt);

	      p[i].prio=0;

	      p[i].no=i+1;

	   }

	   p[0].wt=0;

	   for(i=1;i<n;i++)

	   p[i].wt=p[i-1].wt+p[i-1].bt;

	   for(i=0;i<n;i++)

	     p[i].tt=p[i].wt+p[i].bt;

	   

	   printf("\nGantt Chart is:");

	   printf("\n0 ");

	   for(i=0;i<n;i++)

	     printf("P%d %d ",p[i].no,p[i].tt);

	   printf("\n\nProcess   BT	WT	TT");

	   for(i=0;i<n;i++)

	    printf("\n%d   %d	%d    %d",p[i].no,p[i].bt,p[i].wt,p[i].tt);

	   avg_w=0;

	   avg_t=0;

	   for(i=0;i<n;i++)

	   {  avg_w=avg_w+p[i].wt;

	      avg_t=avg_t+p[i].tt;

	   }

	   avg_w=(float)avg_w/n;

	   avg_t=(float)avg_t/n;

	   printf("\n\nAverage waiting time is: %.2f ",avg_w);

	   printf("\nAverage turn around time is: %.2f ",avg_t);

	 break;

	 }

    }while(ch!=5);

   getch();

}
