#include <stdio.h>
#include <string.h>

int main(){
  char a[100],b[100];

  printf("Enter the number to check if it is a palindrome: ");  
  scanf("%[^\n]s",a);
  // copy string

  strcpy(b,a);

  int j = strlen(b) - 1;
  
  // check ที่ละตัวว่าเมื่อกันหรือปาว
  for(int i = 0 ;i < strlen(b);i++,j--){

    if(a[i] != a[j]){
        printf("NO"); 
        break;
    }else{
          printf("YES");
          break;
    }
  }
    return 0;

}