#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

void Print(int arr[3][3]) {
  int i,j;
  for(i = 0; i < 3; i++) {
      int n = 0;
      for(j = 0; j < 3; j++) {
        if(arr[i][j]>=0 &&arr[i][j]<=9)
          printf(" %d ", arr[i][j]);
        else if(arr[i][j]==11)
          printf(" X ");
        else if(arr[i][j]==12)
            printf(" O ");

          if(j < 2) {
              printf("|");
              n++;
          }
      }
      printf("\n");
      if(i < 2)
          printf("---|---|---\n");
        }
}

int Search(int arr[3][3], int n, int m){
  int i,j;
  int flag=0;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      if(arr[i][j]==n && arr[i][j]!=11 && arr[i][j]!=12){
      arr[i][j]=m;
      flag=1;
    }
    }
  }
  if(flag==0)
  printf("Invalid, Try Again\n");

  return flag;
}

int Check(int arr[3][3]){
  int j;
  for(j=0;j<3;j++){
  if(arr[0][j]==arr[1][j] && arr[1][j]==arr[2][j]){
  return arr[0][j];
  break;
}

  else if(arr[j][0]==arr[j][1] && arr[j][1]==arr[j][2]){
  return arr[j][0];
  break;
}

  else if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2]){
  return arr[1][1];
  break;
}

  else if(arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0]){
  return arr[1][1];
  break;
}
}
return 0;
}



int randomGenerator(int arr[3][3]){
  int j;
  int n=0;
for(j=0;j<3;j++){
if(arr[0][j]==arr[1][j] && arr[2][j]!=11 && arr[2][j]!=12){
n=arr[2][j];
break;
}
else if(arr[1][j]==arr[2][j] && arr[0][j]!=11 && arr[0][j]!=12){
n=arr[0][j];
break;
}
else if(arr[0][j]==arr[2][j] && arr[1][j]!=11 && arr[1][j]!=12){
n=arr[1][j];
break;
}
else if(arr[j][0]==arr[j][1] && arr[j][2]!=11 && arr[j][2]!=12){
n=arr[j][2];
break;
}
else if(arr[j][0]==arr[j][2] && arr[j][1]!=11 && arr[j][1]!=12){
n=arr[j][1];
break;
}
else if(arr[j][1]==arr[j][2] && arr[j][0]!=11 && arr[j][0]!=12){
n=arr[j][0];
break;
}
else if(arr[0][0]==arr[2][2] && arr[1][1]!=11 && arr[1][1]!=12){
n=arr[1][1];
break;
}
else if(arr[1][1]==arr[2][2] && arr[0][0]!=11 && arr[0][0]!=12){
n=arr[0][0];
break;
}
else if(arr[0][0]==arr[1][1] && arr[2][2]!=11 && arr[2][2]!=12){
n=arr[2][2];
break;
}
else if(arr[2][0]==arr[0][2] && arr[1][1]!=11 && arr[1][1]!=12){
n=arr[1][1];
break;
}
else if(arr[1][1]==arr[0][2] && arr[2][0]!=11 && arr[2][0]!=12){
n=arr[2][0];
break;
}
else if(arr[1][1]==arr[2][0] && arr[0][2]!=11 && arr[0][2]!=12){
n=arr[0][2];
break;
}
}
if(n==0){
  srand(time(0));

    n=(rand()%8+1);
}

  return(n);
}

int AI(int arr[3][3]) {
    int n;
    do {
        n = randomGenerator(arr);
    } while (arr[(n-1)/3][(n-1)%3] != n);
    Search(arr, n, 11);
    return n;
}

int TicTacToeAI(int arr[3][3]){
  int n,ai;
  int retry;
  int cnt=0;
  int flag=0;
  int check=0;
  int p;

Print(arr);
printf("Press any key to continue:");
getch();
system("cls");

  while (cnt!=9 && check==0) {
    retry=0;
  if(cnt%2==0){
    while(retry==0){
    printf("Player 1 turn:\n");
    ai=AI(arr);
    Print(arr);
    retry=1;
  }
  }
  else if(cnt%2==1){
    while(retry==0){
    printf("Player 2 turn:\n");
    scanf("%d",&n);
    retry=Search(arr,n,12);
    Print(arr);
    }
  }
  check=Check(arr);
  printf("Press any key to continue:");
  getch();

  cnt++;
  system("cls");
}

if(check==11)
  flag=4;
else if(check==12)
  flag=1;
if(cnt==9 && check==11)
  flag=4;
else if(cnt==9 && check==12)
  flag=1;
else if(cnt==9 && check!=11 && check!=12)
  flag=3;

return flag;

}

int TicTacToeAIXO(int arr[3][3]){
  int n,ai;
  int retry;
  int cnt=0;
  int flag=0;
  int check=0;
  int p;

Print(arr);
printf("Press any key to continue:");
getch();
system("cls");

  while (cnt!=9 && check==0) {
    retry=0;
  if(cnt%2==1){
    while(retry==0){
    printf("Player 2 turn:\n");
    ai=AI(arr);
    Print(arr);
    retry=1;
  }
  }
  else if(cnt%2==0){
    while(retry==0){
    printf("Player 1 turn:\n");
    scanf("%d",&n);
    retry=Search(arr,n,12);
    Print(arr);
    }
  }
  check=Check(arr);
  printf("Press any key to continue:");
  getch();

  cnt++;
  system("cls");
}

if(check==11)
  flag=4;
else if(check==12)
  flag=1;
if(cnt==9 && check==11)
  flag=4;
else if(cnt==9 && check==12)
  flag=1;
else if(cnt==9 && check!=11 && check!=12)
  flag=3;

return flag;

}

int TicTacToe(int arr[3][3]){
  int n;
  int retry;
  int cnt=0;
  int flag=0;
  int check=0;

Print(arr);
printf("Press any key to continue:");
getch();
system("cls");

while (cnt!=9 && check==0) {
  retry=0;
if(cnt%2==0){
  while(retry==0){
  printf("Player 1 turn:\n");
  scanf("%d",&n);
  retry=Search(arr,n,11);
  Print(arr);
}
}
else if(cnt%2==1){
  while(retry==0){
  printf("Player 2 turn:\n");
  scanf("%d",&n);
  retry=Search(arr,n,12);
  Print(arr);
  }
}
check=Check(arr);
printf("Press any key to continue:");
getch();
cnt++;
system("cls");
}

if(check==11)
  flag=1;
else if(check==12)
  flag=2;
if(cnt==9)
  flag=3;

return flag;

}

void initialize(int arr[3][3]) {
  int m=0;
  int i,j;
  for(i=0;i<3;i++)
  for(j=0;j<3;j++)
  arr[i][j]=++m;
}

void main(){
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int i, j, n;
  int flag=0;
  char ch;


do{
  printf("--MENU--\n");
  printf("1)2-Player\n");
  printf("2)Player Vs CPU\n");

  printf("Enter Option :\n");
  scanf("%d",&n);

  switch (n) {
    case 1:
      flag=TicTacToe(arr);
      break;
    case 2:
      system("cls");
      printf("1st CPU-->0/1st Human-->1\n");
      scanf("%d",&n);
      switch (n) {
        case 0:
          flag=TicTacToeAI(arr);
          break;
        case 1:
          flag=TicTacToeAIXO(arr);
          break;
      }
  }
  if(flag==1)
    printf("Player 1 win\n");
  else if(flag==2)
    printf("Player 2 win\n");
  else if(flag==3)
    printf("Draw\n");
  else if(flag==4)
    printf("Computer wins\n");

printf("Enter 'Y'to continue :\n");
scanf("%c%c",&ch,&ch);
initialize(arr);
}while (ch=='y'||ch=='Y');

}
