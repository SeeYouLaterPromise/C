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
    int flag = 0;
    for(int i=m;i<=n;i++){
        int temp = 1;
        while(i>=fib(temp)){
            if(i==fib(temp)){
            	if(flag==0){
            		printf("%d",i);
				}else{
					printf(" %d",i);
				}
                flag = 1;
                break;
            }else{
                temp++;
            }
        }
    }
    if(flag==0){
        printf("No Fibonacci number");
    }
}
