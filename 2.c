#include <stdio.h>
void print( char ch){

printf("Value received from main:%c\n ",ch);

}
int main(){
char inputChar;
scanf("%c",&inputChar);



print(inputChar);

return 0;
}
