//
// Created by yunion on 11/24/20.
//

//
// Created by yunion on 11/23/20.
//
#include <pthread.h>

#include <stdio.h>
#include <stdlib.h>
int counter =0;
void count();
int main(){
    for (int i = 0; i < 1000; ++i) {
        pthread_t thread ;
        pthread_create(&thread,NULL,(void *)count,NULL);
    }
    printf("%d",counter);

}
void count(){
    for (int i = 0; i < 1000; ++i) {
        counter+=1;
    }
}
