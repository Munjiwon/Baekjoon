#include <stdio.h>

int main(){
  int a,b,c,d,e;
  int sum[10]={0};
    
  scanf("%d%d%d",&a,&b,&c);
  d=a*b*c;
  while(d>0){
    e=d%10;
    d=d/10;
    for(int n=0;n<10;n++){
      if(e==n){
        sum[n]++;
      }
    }
  }
  for(int k=0;k<10;k++){
    printf("%d\n",sum[k]);
  }  
}

//https://www.acmicpc.net/problem/2577
