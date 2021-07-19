#include <stdio.h>
int gcd(int a,int b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

int main()
{
    int a,b,n,small,ls=0,la=0;
    scanf("%d%d%d",&a,&b,&n);
    while(n>=0 ){
        n-=gcd(a,n);
        if(n<0){
        ls++;
        break;
        //  printf("%d",ls);
            
        }
        n-=gcd(b,n);
         if(n<0){
        la++;
        break;
        // printf("%d",la);
        }
        // else printf("1");
        
    }
    if(ls>0)
    printf("1");
    else
    printf("0");
    return 0;
}
