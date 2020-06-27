#include<stdio.h>
int main()
{
      int t,score[10000],i,j,marry,john;
      while(scanf("%d",&t)==1){
            marry=0;
            john=0;
            if(t==0)
            break;
                  for(i=0;i<t;i++){
                        scanf("%d",&score[i]);
                  }
                  for(j=0;j<t;j++){
                        if(score[j]==0)
                        marry++;
                  else
                  john++;
                  }
            printf("Mary won %d times and John won %d times\n",marry,john);
      }
      return 0;
}
