/*NAME: Odhiambo Geofrey Odiwuor 
Reg NO: PA106/G/28771/25
*/

//It is a collection of items, or data, that are stored together.

/*int scores[2][2] = {

    {65, 92},

    {84, 72}

};
*/

#include <stdio.h>




int main() {

    int scores[2][2] = {{65, 92}, {84, 72}};

    int i, j;

    

    printf("Elements of the scores array:\n");

    for (i = 0; i < 2; i++) {

        for (j = 0; j < 2; j++) {

            printf("%d ", scores[i][j]);

        }

        printf("\n");

    }

    

    return 0;

}


