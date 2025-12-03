//Q10 Write a program to input time in seconds and convert it to hours:minutes:seconds format.


#include<stdio.h>
int main(){
    int totalsecond,hour,minutes,second;
    
    printf("enter second:");
    scanf("%d",&totalsecond);

    hour=totalsecond/3600;
    minutes=(totalsecond%3600)/60;
    second=totalsecond%60;

    printf("second into hours:minutes:seconds format is:%d:%d:%d",hour,minutes,second);

    return 0;
}