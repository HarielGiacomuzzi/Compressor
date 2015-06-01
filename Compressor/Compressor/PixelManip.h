//
//  PixelManip.h
//  Compressor
//
//  Created by Hariel Giacomuzzi on 6/1/15.
//  Copyright (c) 2015 Hariel Giacomuzzi. All rights reserved.
//

#ifndef __Compressor__PixelManip__
#define __Compressor__PixelManip__

#include <stdio.h>

struct Pixel{
    short r;
    short g;
    short b;
};

struct Node{
    Node *next;
    Node *prev;
    void *value;
};

class PixelManip{
private:
    Pixel pixels[];
    bool isEqualToPixel(Pixel *p);
public:
    void addPixel(Pixel *p);
    int pixelsCount();
    
};


#endif /* defined(__Compressor__PixelManip__) */
