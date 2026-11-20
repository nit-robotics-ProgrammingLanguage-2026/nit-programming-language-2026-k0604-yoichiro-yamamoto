#include <stdio.h>
int main(void)
{
    int number;
    long output=0;
    scanf("%d",&number);
    if(number<0){printf("NG");
        return 0;
    }
    for(int loop=1;;loop++)
    {
        if(loop>number)break;//loopがnumberを超えるとループを終える
        if(loop%3==0||loop%5==0)continue;//3と5の倍数の場合、足さないでループを続行する
        output+=loop;
    }
    printf("%ld",output);
    return 0;
}