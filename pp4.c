#include<stdio.h>

int main(){

    int total_marks_of_each_sub;
    int maths, physics ,chem;
    int mp,pp,cp;
    printf("Enter Total Marks Of each Sub:\n");
    scanf("%d",&total_marks_of_each_sub);

     printf("Enter The Maths Marks:\n");
    scanf("%d",&maths);

    printf("Enter The Physics Marks:\n");
    scanf("%d",&physics);

    
    printf("Enter The Chemistry Marks:\n");
    scanf("%d",&chem);


    int sum;

    sum = (int)((maths + physics +chem)/(total_marks_of_each_sub*3))*100;

    mp = (maths/total_marks_of_each_sub)*100;
     pp = (physics/total_marks_of_each_sub)*100;
      cp = (chem/total_marks_of_each_sub)*100;

    if((mp<33 || cp<33 || pp<33) && sum<40){
            printf("You Are Failed");

    }

    else{
        printf("You are passed");
    }
}