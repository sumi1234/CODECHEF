#include<stdio.h>

int main()
{
    short int t,i;
	unsigned long long int n, k; 
	scanf("%d", &t);
	for(i = 0; i<t;i++) 
	{
		scanf("%llu %llu\n",&n,&k);
        if(n==0)
        {
             printf("0 0\n");
        }
        else if(k == 0)
        {
            printf("0 %llu\n",n);            
        }
        else
        {
            unsigned long long int student = n/k;
		    unsigned long long int teacher = n%k;
            printf("%llu %llu\n",student,teacher);
        }      
	}
	
	return 0;
}

