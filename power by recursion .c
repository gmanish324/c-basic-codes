#include<stdio.h>
int power(int a,int p){
    if (p==0){
        return 1;
        
    }
    else if (p==1){
        return a;
    }
    else{
        return a*power(a,p-1);
    }
}

int main(){
    int a,p;
    scanf("%d %d",&a,&p);
    printf("%d",power(a,p));
    return 0;
}
