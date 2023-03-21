#include <stdio.h>
#include <string.h>
//delete each character in S1 that match with S2

//declare variables
void squeeze(char S1[], char S2[]);
char S1[] = "and Heandllo";
char S2[] = "and";
//char ans[];

void main(){
  squeeze(S1, S2);
  printf("%s\n", "the answer is");
  printf("%s", S1);
}

void squeeze(char S1[], char S2[])
{
  int i,j,k;
  for( k = 0; S2[k] != '\0'; ++k) {
    for(i = j = 0; S1[i] != '\0';++i){
        if (S1[i] != S2[k]){
            S1[j] = S1[i];
            j++;
        }
    S1[j] = '\0';
    }
  } 
}
