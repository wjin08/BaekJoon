#include <stdio.h>
int main(void) {
    char id[50];             // 1. 크기가 50인 char형 배열 선언
    scanf("%s", id);         // 2. 입력받은 문자열을 id에 저장
    printf("%s?\?!", id);    // 3. 입력받은 id와 "??!"를 붙여서 출력
                             //    (문자열을 출력하므로 서식문자는 %s 사용)
                             //    ("??!"는 삼중자이므로 물음표 사이에 이스케이프문자 삽입)
    return 0;
}