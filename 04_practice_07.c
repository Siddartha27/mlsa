# include<stdio.h>

int main(){
    int a,i,s=0;
    for(i=1;i<=10;i++){
        a=8*i;
        s=s+a;

    }
    printf("The sum of numbers occuring in the multiplication table of 8 is %d",s);
    return 0;
}