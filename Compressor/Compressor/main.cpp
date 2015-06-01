//
//  main.cpp
//  Compressor
//
//  Created by Hariel Giacomuzzi on 6/1/15.
//  Copyright (c) 2015 Hariel Giacomuzzi. All rights reserved.
//

#include <iostream>
#include "PixelManip.h"

int main(int argc, const char * argv[]) {
    // insert code here..
    
    //struct Pixel *p = (struct Pixel*)alloca(sizeof(Pixel));
    
    FILE *file = fopen("/Users/harielgiacomuzzi/Documents/Compressing/Compressor/Compressor/Compressor/Lena.ppm", "r");
    char buffer[100];
    
    if (file == NULL) perror ("Error opening file");
    else
    {
        while ( ! feof (file) )
        {
            if ( fgets (buffer , 100 , file) == NULL ) break;
            fputs (buffer , stdout);
        }
        fclose (file);
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
