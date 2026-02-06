#include <stdio.h>

int main()
{
    enum LaneAssociationType {L=1, C=2, R=3};
    int speed;
    enum LaneAssociationType selectedLane;
    int lane;

    while(1) {
        printf("\nCreate the properties of a vehicle.\nSpeed in m/s: ");
        scanf("%i", &speed);
        printf("Lane (1=Left, 2=Center, 3=Right): ");
        scanf(" %i", &lane);

        if(lane >= 1 && lane <= 3) {
            selectedLane = lane;

            switch(selectedLane)  {
                case L:
                    printf("---------------------------------\n        L       C       R        \n---------------------------------\n    |       |       |       |    \n    |   x   |       |       |    \n    |       |       |       |    \n    |       |       |       |    \n    |       |       |       |    \n    |       |       |       |\n");
                    break;

                case C:
                    printf("---------------------------------\n        L       C       R        \n---------------------------------\n    |       |       |       |    \n    |       |   x   |       |    \n    |       |       |       |    \n    |       |       |       |    \n    |       |       |       |    \n    |       |       |       |\n");
                    break;
                    
                case R:
                    printf("---------------------------------\n        L       C       R        \n---------------------------------\n    |       |       |       |    \n    |       |       |   x   |    \n    |       |       |       |    \n    |       |       |       |    \n    |       |       |       |    \n    |       |       |       |\n");
                    break;
            }
        }
        else {
            break;
        }
    }

    return 0;
}
