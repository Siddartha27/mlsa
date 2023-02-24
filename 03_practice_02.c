# include<stdio.h>

int main(){
    int physics,maths,chem;
    float totalp;
    printf("enter maths marks \n");
    scanf("%d",&maths);
    printf("enter chemistry marks \n");
    scanf("%d",&chem);
    printf("enter physics marks \n");
    scanf("%d",&physics);
    totalp=(maths+physics+chem)/3;
    if (totalp>=40){
        if (maths>=33 && physics>=33 && chem>=33){
            printf("You are passed and your percentage is %f",totalp);

        }
        else{
            printf("You are failed and your percentage is %f",totalp);

        }
     }
        else{
            printf("You are failed and your percentage is %f",totalp);

        }

    

        return 0;
}