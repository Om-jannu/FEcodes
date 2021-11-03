// wap to check whether the person is eligible for blood donation
#include <stdio.h>

int main() {
int age,weight;
printf("\nEnter your age=");
scanf("%d",&age);
printf("enter your weight(in Kg)=");
scanf("%d",&weight);

if(age<18||age>55||weight>45){
    printf("You are **NOT ELIGIBLE** for blood donation");
}
else {printf("You are **ELIGIBLE**for blood donation");
}
    return 0;
}
