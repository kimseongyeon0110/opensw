/*
 * mpointer.c
 *
 *  Created on: Nov 8, 2020
 *      Author: seongyeonkim
 */
 
#include <stdio.h> // 표준입출력 함수를 사용하기 위하여 stdio헤더파일을 추가
 
void func1(int* p); //함수 프로토타입 선언
void func2(int** p);
void func3(int*** p);
void func4(int**** p);
 
int main() { //메인함수 선언
{
    int i = 100;
    int* p, ** dp, *** tp;
 
    p = &i; //포인터 주소 설정
    dp = &p;
    tp = &dp;
 
    func1(&i);
    printf("i = %d\n", i); // 정수형 변수 i의 값을 출력
 
    func2(&p);
    printf("*p = %d\n", *p); // 포인터 변수 p가 가리키는 값을 출력
 
    func3(&dp);
    printf("**dp = %d\n", **dp); // 이중 포인터 변수 dp가 카리키는 값을 출력
 
    func4(&tp);
    printf("***tp = %d\n", ***tp); // 삼중 포인터 변수 dp가 카리키는 값을 출력
 
    printf("i = %d\n", i); // i 출력
    return 0;
}
 
void func1(int* p) //사용자 정의 함수 선언
{
    *p = *p + 100;
}
 
void func2(int** p) //사용자 정의 함수 선언
{
    **p = **p + 100;
}
 
void func3(int*** p) //사용자 정의 함수 선언
{
    ***p = ***p + 100;
}
 
void func4(int**** p) //사용자 정의 함수 선언
{
    ****p = ****p + 100;
}