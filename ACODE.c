#include<stdio.h>
#include<string.h>
int  main()
{
    int i;
    long long int a[100000];
	char s[100000];
    
    while(1){
	  scanf("%s",&s);
		if(s[0]=='0' )
            break;
        
		a[0]=1;
       
		for(i=1;i<strlen(s);i++)
		{
			
			
			if(s[i]!='0')
			{
				a[i]=a[i-1];
				if((i+1)<strlen(s) && s[i+1]=='0')
					{
						a[i]=a[i-1];
                        			a[i+1]=a[i-1];
						i++;					
					}					
				
				else if((s[i]<='6' && s[i-1]=='2') || (s[i]<='9' && s[i-1]=='1') )
				{
					    if(i==1)
                           			 a[i]+=1;
                        			else
                        			a[i]+=a[i-2];
				}
               
			}
			else
			{
				a[i]=a[i-1];
					
			}

		}
			printf("%d\n",a[strlen(s)-1]);
	}

    return 0;
}
