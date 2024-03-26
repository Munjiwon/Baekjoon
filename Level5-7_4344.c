#include <stdio.h>
//https://www.acmicpc.net/problem/4344

int main(){
    int score[1000];
    int c,n;
    scanf("%d",&c);
    for(int i=0;i<c;i++){
        scanf("%d",&n);
        double average=0;
        for(int j=0;j<n;j++){
          scanf("%d",&score[j]);
          average+=score[j];
        }
        average/=n;
        int count=0;
        for(int k=0;k<n;k++){
          if(score[k]>average){count++;}
        }
        printf("%.3lf%%\n",(double)count/n*100);
    }
}
