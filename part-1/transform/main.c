#include<stdio.h>

int main(int argc,char* argv[]){
    //定义变量，并赋值
    int a=5;
    char c = 'a';
    float f = 5.3;
    double m = 12.65;
    double result;
    
    //同类型数据之间进行运算并输出
    printf("a + c = %d\n",a+c);
    printf("a + c = %c\n",a+c);
    printf("f + m = %f\n",f+m);

    //不同数据类型之间进行运算
    printf("a + m = %f\n",a+m);
    printf("c + f = %f\n",c+f);
    
    //混合运算
    result = a + c*(f+m);
    printf("result = %f\n",result);    
}
