#include <stdio.h>

int main(void)
{
    int L1, L2, L3;

    printf("inserisci il valore del primo lato del triangolo: ");
    scanf("%d", &L1);
    printf("inserisci il valore del secondo lato del triangolo: ");
    scanf("%d", &L2);
    printf("inserisci il valore del terzo lato del triangolo: ");
    scanf("%d", &L3);

    if (L1==L2)
    {
        if (L2==L3)

            printf("il triangolo e' equilatero");

        else(printf("il triangolo e' iscoscele"));
    }
        else if (L2==L3)

                printf("il triangolo e' iscoscele");
        else if (L3==L1)
                printf("il triangolo e' iscoscele");


    else (printf("il triangolo e' scaleno"));



    return 0;
}
