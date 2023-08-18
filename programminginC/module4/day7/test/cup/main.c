#include <stdio.h>

int cup(int cold, int warm, int hot){
        printf("%d\n", cold+warm+hot);
        if(cold > warm && cold > hot){
            return cold;
        }
        if(warm>cold && warm>hot){
            return warm;
        }
        if (hot > cold && hot > warm){
            return hot;
        }
        if (((cold+warm+hot) % 2) > 0 ){
            printf("hello");
            return (((cold+warm+hot) / 2) + 2);
        } else{
            return ((cold+warm+hot) / 2);
        }

}

int main(){
    printf("%d\n", cup(1,4,2));
    printf("%d\n", cup(5,4,4));
    printf("%d\n", cup(5,0,0));
    return 0;
}