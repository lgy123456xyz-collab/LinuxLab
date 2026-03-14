#include<stdio.h>
#include<time.h>

int main(){
    int loop=1000000000;
    long sum=0;
    int start_time=clock();
    int index=0;
    for(index=0;index<loop;index++){
        sum+=index;
    }
    int end_time=clock();
    printf("Sum:%ld,Time Cost:%lf\n",sum,(end_time-start_time)*1.0/CLOCKS_PER_SEC);
    return 0;
}