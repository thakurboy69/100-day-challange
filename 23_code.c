/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.
*/

#include<stdio.h>
int main(){
int daylate;
int fine=0;
printf("number of day late:");
scanf("%d",&daylate);
if(daylate<=0){
    printf("no fine.book return on time.\n");
}
else if(daylate>30){
    printf("Membership cancelled");
}else{
if(daylate<=5){
    fine=daylate*2;
}else if(daylate<=10){
    fine=(5*2)+(daylate-5)*4;
}else {
    fine=(5*2)+(5*4)+(daylate-10)*6;
}
printf("Total fine:₹%d",fine);
}
return 0;
}
