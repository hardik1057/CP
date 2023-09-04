#include <stdio.h>
#include <math.h>

int main()
{
    char pin[5];
    int numInstructions;
    int totalDistance = 0;
    int x = 0, y = 0;

    // Read the PIN
    scanf("%s", pin);

    // Read the number of instructions
    scanf("%d", &numInstructions);

    for (int i = 0; i < numInstructions; i++)
    {
        int direction, distance;
        scanf("%d %d", &direction, &distance);

        // Update the total distance
        totalDistance += distance;

        // Update the coordinates based on the direction
        switch (direction)
        {
        case 1: // North
            y += distance;
            break;
        case 2: // South
            y -= distance;
            break;
        case 3: // East
            x += distance;
            break;
        case 4: // West
            x -= distance;
            break;
        }
    }

    // Calculate displacement
    int displacement = abs(x) + abs(y);

    // Calculate the quadrant
    int quadrant = -1;
    if (x > 0 && y > 0)
        quadrant = 1;
    else if (x < 0 && y > 0)
        quadrant = 2;
    else if (x < 0 && y < 0)
        quadrant = 3;
    else if (x > 0 && y < 0)
        quadrant = 4;

    // Output the results
    printf("%d\n%d\n%d\n", totalDistance, displacement, quadrant);

    return 0;
}
