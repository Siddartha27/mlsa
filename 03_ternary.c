# include<stdio.h>

int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    (a<5)? printf("%d is less than 5",a): printf("%d is not less than 5",a);

    printf("%d",&a);
    return 0;
}