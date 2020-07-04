#include<stdio.h>

int main(int argc,char* argv[]){
    //换行符'\n'
    printf("How are you?\n");
    printf("I'm fine, thank you!\n");

    //制表符'\t'
    printf("How are you?\t");
    printf("I'm fine!\n\n");

    //退格符'\b',当前的输出位置退一格，输出的起始位置左移一位
    printf(" how are you?\n");
    printf(" \bI am fine!\n\n");

    //回车符'\r',使当前的输出位置回到文本开头
    printf("                I'm fine.");	//I 前面共有16个空格
    printf("\rHow are you?\n\n");

    printf("note:\n a s\ti\b\bk\rp\n");
    return 0;    
}
