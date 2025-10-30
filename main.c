#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(int argc, char *argv[])
{
    int i, average;
    int sum = 0;
    int grade[SIZE];
    
    printf("5명의 점수를 입력하세요.\n");
    
    for(i=0;i<SIZE;i++)
    {
    scanf("%d", &grade[i]);
    sum += grade[i];
    }
    #if 0
    for(i=0;i<SIZE;i++)
    printf("grade[%d]=%d\n", i, grade[i]);
    #endif
    
    printf("성적 평균 : %i\n", sum/SIZE);
    
    system("PAUSE");	
    return 0;
}
