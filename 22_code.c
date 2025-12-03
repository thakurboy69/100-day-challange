//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main(){
    int cp,sp;
    float x;
    printf("Enter cost price and selling price:");
    scanf("%d %d",&cp,&sp);

   
    if(sp>cp){
        x=((float)(sp-cp)/cp)*100;
        printf("profit of %f%%\n",x);
    }
    else if(cp>sp){
        x=((float)(sp-cp)/cp)*100;
        printf("loss of %f%%\n",x);
    }
    else{
        printf("no loss no profit \n",x);
    }
     
    return 0;

}