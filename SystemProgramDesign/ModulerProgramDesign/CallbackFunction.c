#include<stdio.h>
typedef void (*EventHandler)(int eventCode);

void simulatEvent(EventHandler callback){
    printf("Simulating event...\n");
    callback(42);
    
}
void myHandler(int code){
    printf("Event recived with code:%d\n",code);

}

int main(){
    simulatEvent(myHandler);
    return 0;
}