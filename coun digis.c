int digit(int num){
    int sum=0;
    while(num>=0){
        sum=sum+1;
        num=num/10;
        if (num==0){
            break;}
             }
    printf("%d",sum);
