#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(NULL));
    int mikuji = rand() % 3 + 1;
    if (mikuji == 1){
        printf("あなたの運勢は大吉です。\n");
    }else if (mikuji == 2){
        printf("あなたの運勢は中吉です。\n");
    }else{
        printf("あなたの運勢は小吉です。\n");
    }
    return 0;
}
