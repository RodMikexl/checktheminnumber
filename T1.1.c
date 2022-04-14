/*

 */

#include <stdio.h>
#include <stdlib.h>

void smallestOfThree(int x, int y, int z){
    if (x<=y && X<= Z) {
        printf("Smallest number is %d",x);
    }else if (y<=x && y<=z){
        printf("Smallest number is %d",y);
    }
    else{
        printf("Smallest number is %d",z);
    }
}

//when the user enter the 5 value, it will show three of the smallest one
int main(){
    int min[3],n,t;
    printf("Enter 5 value:");
    for (int i=0;i<5;i++){
    scanf("%d",&n);
    if (i<3) min[i]=n;
    else{
        if (n<min[0])
            {t=n;n=min[0];min[0]=t;}
        if (n<min[1])
            {t=n;n=min[1];min[1]=t;}
        if (n<min[2])
            {t=n;n=min[2];min[2]=t;}
    }
    }
    printf("the three smallest number is :%d, %d, %d\n", min[0], min[1], min[2]);
    smallestOfThree(min[0], min[1], min[2]);
    return 0;
    
}

