#include <stdio.h>

int main()
{
    int h,m,play;
    scanf("%d %d",&h,&m);
    scanf("%d",&play);
    int play_h=play/60;
    int play_m=play%60;
    
    if(m+play_m>=60){
        m+=play_m-60;
        play_h++;
    }
    else{
        m+=play_m;
    }
    if(h+play_h>23){
        h+=play_h-24;
    }
    else{
        h+=play_h;
    }
    printf("%d %d",h,m);
}
