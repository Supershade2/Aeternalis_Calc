#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
const double essence_factor = .75;
const int coal_factor = 12;
const int division_factor = 64;
int main(int argc, char *argv[])
{
    char* s = getenv("HOME");
    char* str = "/Documents/outputData.text";
    strcat(s,str);
    FILE *ofp = fopen(s, "w");
    printf("%c]0;%s%c", '\033', "Aeternalis fuel returns calculator", '\007');
    printf("Please enter how many sets of twelve coal you want to make:");
    fflush(stdout);
    int sets;
    scanf("%d", &sets);
    double answer = coal_factor*sets;
    double Coal_Essence = answer*essence_factor;
    double Aeternalis_Fuel = answer/division_factor;
    printf("You will get ");
    printf("%f", answer);
    printf(" coal\n");
    printf("You will need ");
    printf("%f",Coal_Essence);
    printf(" essence to make that many sets\nYou should be able to make ");
    printf("%f",Aeternalis_Fuel);
    printf(" Aeternalis fuel\n");
    fflush(stdout);
    fprintf(ofp, "%s %f %s %f %s %f", "Coal Gained:",answer,"\nCoal essence needed:",Coal_Essence,"\nMakeable Aeternalis fuel:",Aeternalis_Fuel);
    fflush(ofp);
    fclose(ofp);
    return 0;
}
