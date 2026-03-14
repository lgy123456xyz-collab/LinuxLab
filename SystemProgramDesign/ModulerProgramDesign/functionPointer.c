#include<stdio.h>
int add(int a,int b){
    return a+b;
}

int subtract(int a,int b){
    return a-b;
}

int multiply(int a,int b){
    return a*b;
}

int divide(int a,int b){
    return a/b;
}

int (*operation)(int , int);

int main(){
    int add_result=add(10,5);
    int subtract_result=subtract(10,5);
    int multiply_result=multiply(10,5);
    int divide_result=divide(10,5);
    printf("Add Result:%d\n",add_result);
    printf("Subtract Result:%d\n",subtract_result);
    printf("Multiply Result:%d\n",multiply_result);
    printf("Divide Result:%d\n",divide_result);
    operation=add;
    printf("Operation Result:%d\n",operation(10,5));
    operation=subtract;
    printf("Operation Result:%d\n",operation(10,5));
    operation=multiply;
    printf("Operation Result:%d\n",operation(10,5));
    operation=divide;
    printf("Operation Result:%d\n",operation(10,5));
    return 0;
    
}