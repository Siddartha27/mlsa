# include<stdio.h>

int main(){
    int i;
    printf("The multiplication table of 10 in reverse order is  : \n");
    for (i=10;i>=1;i--){
        printf("10 X %d=%d\n",i,10 *i);

    }
    return 0;
}