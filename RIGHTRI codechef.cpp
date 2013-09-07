#include<stdio.h>

struct point
{
    int x,y;
    point(bool input_val=1)
    {
        if(input_val)
            scanf("%d %d",&x,&y);
    }
    
    point operator-(point p)
    {
        point q(0);
        q.x = x - p.x;
        q.y = y - p.y;
        return q;
        
    }
    
    int operator*(point p)
    {
        return x*p.x + y*p.y;
    }
};

int main()
{
    int N;
    scanf("%d",&N);
    int count = 0;
    for(int i=0;i<N;i++)
    {
        point a,b,c;
        if((a-b)*(c - b)==0 || (b-c)*(a - c)==0 || (c-a)*(b - a)==0)
            count++;        
    }
    
    printf("%d",count);
}






