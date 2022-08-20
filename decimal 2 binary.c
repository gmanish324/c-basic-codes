#include<stdio.h>
int main(){
    int n,array[20]={},i=0;
    scanf("%d",&n);
    while(1){
        array[i]=n%2;
        n=n/2;
        i++;
        if (n==0){
        
            break;
        }
            
    }
    
    int j;
    for(j=i-1;j>=0;--j){
        printf("%d",array[j]);
    }
    return 0;
}
