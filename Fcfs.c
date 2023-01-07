#include <iostream>
#include <conio.h>
#include <fstream>
#include <unistd.h>
#include <getopt.h>

using namespace std;



tydef struct process{

 int processId;
 int PBursttime;
 int priority;
 int PArrivaltime;
 int waitingtime
 int showresult
};

int main(int argc, char *argv[]){
 
char *input_file = NULL;
    char *output_file = NULL;
    int ;

    while ((c = getopt(argc, argv, "f:o:")) != -1)
    {
        switch (c)
        {
        case 'f':
            input_file = optarg;
            break;
        case 'o':
            output_file = optarg;
            break;
        default:
            printf("Usage: %s -f input_file -o output_file\n", argv[0]);
            exit(EXIT_FAILURE);
        }
    }

    if (input_file == NULL || output_file == NULL)
    {
        printf("Usage: %s -f input_file -o output_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *in = fopen(input_file, "r");
    if (in == NULL)
    {
        perror("Error opening input file");
        exit(EXIT_FAILURE);
    }

    FILE *out = fopen(output_file, "w");
    if (out == NULL)
    {
        perror("Error opening output file");
        exit(EXIT_FAILURE);
    }

    fclose(in);
    fclose(out);




return 0;}
