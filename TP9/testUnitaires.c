#include "testUnitaires.h"

void testF11(){
    if (F1(1)==1){
        printf("F1(1) SUCCEED ! \n");
      }
    else{
        printf("F1(1) FAIL ! \n");
      }
}


void testF125(){
    if (F1(25)==11001){
        printf("F1(25) SUCCEED ! \n");
      }
    else{
        printf("F1(25) FAIL ! \n");
      }
}

void testF10(){
    if (F1(0)==0){
        printf("F1(0) SUCCEED ! \n");
      }
    else{
        printf("F1(0) FAIL ! \n");
      }
}
void testF110(){
    if (F1(10)==1010){
        printf("F1(10) SUCCEED ! \n");
      }
    else{
        printf("F1(10) FAIL ! \n");
      }
}
void testF21(){
    if (F2(1)==1){
        printf("F2(1) SUCCEED ! \n");
      }
    else{
        printf("F2(1) FAIL ! \n");
      }
}
void testF20(){
    if (F2(0)==0){
        printf("F2(0) SUCCEED ! \n");
      }
    else{
        printf("F2(0) FAIL ! \n");
      }
}
void testF225(){
    if (F2(25)==11001){
        printf("F2(25) SUCCEED ! \n");
      }
    else{
        printf("F2(25) FAIL ! \n");
      }
}
void testF210(){
    if (F2(10)==1010){
        printf("F2(10) SUCCEED ! \n");
      }
    else{
        printf("F2(10) FAIL ! \n");
      }
}
