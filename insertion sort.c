#include<stdio.h>
int main(){
    
    int array[10]={9,10,20,15,4,7,6,5,4,9};
    int i,j,k,temp=0;
    for(i=1;i<=9;i++){
       
        for(j=(i-1);j>=0;--j){
            
            if (array[j+1]<array[j]){
               
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
//printf("abc %d\n",array[]);
    for(i=0;i<=9;i++){
        printf("%d\n",array[i]);
   }
    
    
    return 0;
}
