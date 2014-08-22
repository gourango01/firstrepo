#include<stdio.h>
int  main()
    {
    int n,a[100002],b1[100002]={0},i,j,count=0,k=0;
        long long int ans=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
               scanf("%d",&a[i]);
       
        b1[0]=0;
        b1[n+1]=0;
         a[n+1]=0;
        for(i=1;i<=n;)
            {
                if(a[i+1]>=a[i])
                   {
                        if(a[i]==a[i-1])
                                b1[i]=b1[i-1];
                       else
                        b1[i]+=b1[i-1]+1; 
                        //printf("%d \n",b1[j]);
                        i++;
                    }
                else if(a[i]>=a[i+1])
                    {
                        j=i;
                            while(a[j]>=a[j+1] && j<n)
                               {
                                   count++;
                                    j++;
                                }
                        count++;
                       // printf("count :%d  i:% d\n",count,i);
                       j=1;
                       i++;
                      if(b1[i-1]==count)
                            b1[i]=count+1;
                      while(j<count){
                          
                              b1[i]=count-j;
                        //  printf("%d \n",b1[i]);
                           j++;
                           i++;
                           
                       }      
                        
                          count=0;
                    }
                 else
                      {
                            
                     
                       }
                       
            }
        for(i=1;i<=n;i++)
            {
                ans+=b1[i];
               // printf("%d ",b1[i]);
            }
            printf("%lld\n",ans);
      return 0;
    }
