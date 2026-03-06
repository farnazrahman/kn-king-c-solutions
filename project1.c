#include<stdio.h>
#include<ctype.h>
int main(){
    int digit[10]={0};
    char c;
    printf("Enter:");
    while((c=getchar())!='\n'){
        c= toupper(c);
        digit[c-'0']++;
    }
    for(int i=0;i<10;i++){
        if(digit[i]>1){
            printf("%d ",i);
        }
    }
    return 0;
}