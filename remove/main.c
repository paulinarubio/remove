//
//  main.c
//  remove
//
//  Created by Paulina Rubio Tarriba on 12/4/13.
//  Copyright (c) 2013 Paulina Rubio Tarriba. All rights reserved.
//

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    char buffer;
    int sourcef, targetf, n;
    
    sourcef = open(argv[1],O_RDONLY);
    if (sourcef== -1){
        printf("Falló");
    }
    close(sourcef);
    remove(argv[1]);
   
}

