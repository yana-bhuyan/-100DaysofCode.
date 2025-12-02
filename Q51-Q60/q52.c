 //52: Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*



#include <stdio.h>

int main() {
    int blocks[] = {1, 2, 5, 3, 1};
    int i, j;

    for (i = 0; i < 5; i++) {

        
        for (j = 0; j < blocks[i]; j++) {
            printf("*\n");
        }

        
        if (i != 4)
            printf("\n");
    }

    return 0;
}
