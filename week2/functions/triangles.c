/*************************************************
 * triangles.c
 * 
 * Doug Lloyd
 * 
 * Detects whether a user has input three floats that
 * are validly the length of a triangle
 * 
 * ***********************************************/
 
#include <stdio.h>
#include <cs50.h>

// prototype
bool valid_triangle(float x, float y, float z);

int main(void)
{
    printf("Give me a real number: ");
    float a = GetFloat();   
    printf("And another: ");
    float b = GetFloat();
    printf("And one more please: ");
    float c = GetFloat();
    printf("Calculating...\n");
    printf("These %s be the lengths of sides of a valid triangle.\n",
           valid_triangle(a, b, c) ? "can" : "cannot");
}

bool valid_triangle(float x, float y, float z)
{
    if (x <= 0 || y <= 0 || z <= 0)
        return false;
    
    if (x + y <= z || x + z <= y || y + z <= x)
        return false;
        
    return true;
}
