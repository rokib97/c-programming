// #include<stdio.h>

// int main(){
//     int i = 1;
//     do{
//         printf("%d\n",i);
//         i++;
//     }while(i<=5);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int k;
//     for (k = -3; k < -5; k++)
//         printf("Hello ");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     while (i < 3) {
//         i++;
//     }
//    printf("%d",i);
//    return 0;
// }

#include <stdio.h>
int main()
{
    int a = 0, i;
    for (i = 0;i < 5; i++)
    {
        a++;
        continue;
    }
    printf("%d %d",i,a);
    return 0;
}
