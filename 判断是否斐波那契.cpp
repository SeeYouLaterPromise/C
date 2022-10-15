#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
    
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */

int fib( int n )
{
    if(n>2){
        return fib(n-1) + fib(n-2);
    }else{
        return 1;
    }
}

void PrintFN( int m, int n )
{
    int i=0,flag = 0;
    while(1){
        i++;
        if(fib(i)>=m&&fib(i)<=n){
            if(flag==0){
                flag = 1;
                printf("%d",fib(i));
            }else if(flag>0){
                printf(" %d",fib(i));
            }
        }
        if(fib(i)>n){
            break;
        }
    }
    if(flag==0){
        printf("No Fibonacci number");
    }
}
