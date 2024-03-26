#include <stdio.h>

int main(){
  int n; //횟수
  char score[80]; //OX가 들어갈 배열
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    int result=0,count=0;  //점수,O의 횟수
    for(int j=0;j<80;j++){
      scanf("%c",&score[j]);
      if(score[j]=='\n'&&j!=0){break;} //OX가 끝났을때 반복종료후 점수를 출력
      else if(score[j]=='O'){
        count++;
        result+=count;
      }
      else{count=0;} //X일경우 O횟수 
    }
    printf("%d\n",result);
  }
}
