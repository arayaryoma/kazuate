#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){ 
  int ans_num,usr_ans,cnt=0;
  srand((unsigned)time(NULL)); 
  ans_num=rand()%100+1;
  puts("1から100までの数あてゲームです");

  do{ 
      cnt++;
      puts("数値を入力してください");
      scanf("%d",&usr_ans);
      if(ans_num==usr_ans){
          puts("正解です");
      }else if(ans_num<usr_ans){
          puts("もっと小さいです");
      } 
      else if(ans_num>usr_ans){
          puts("もっと大きいです");
      }
  }while(ans_num!=usr_ans);
printf("%d回であたりました",cnt);
return 0;
}
