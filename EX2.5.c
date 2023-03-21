//return the first location in S1 where any character from S2 occur // return -1 if not ocuur
#include <stdio.h>
#include <string.h>

//declare variables
int any(char S1[], char S2[]);
char S1[] = "fdaskfjaskfjaklsfjlg;lafka";
char S2[] = "zzzzzzzzzzzszk";
int ans;

void main(){
  ans = any(S1,S2);
  printf("%d",ans);
}

int any(char S1[], char S2[]){
    int i,j;
    for (i = 0; S1[i] != '\0'; i++){
        for(j = 0; S2[j] != '\0'; j++){
            if (S1[i] == S2[j]){
                return i;
            }
        }
    }
    return -1;
