#include <stdio.h>

int main (void)
{
    int x, y;

    printf("키를 입력하시오 :");
    scanf("%d", &x );

    printf("나이를 입력하시오 :");
    scanf("%d", &y );


    if (x > 140 && y >= 10 )
        printf("타도 좋습니다\n" );
    else 
        printf("죄송합니다\n" );
    
    return 0;
    


}
