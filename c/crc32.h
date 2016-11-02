//
//  crc32.h
//  libobfs
//
//  Created by A.BIG.T on 11/2/16.
//  Copyright © 2016 A.BIG.T. All rights reserved.
//

#ifndef crc32_h
#define crc32_h
uint32_t crc32(unsigned char *buffer, unsigned int size) ;
void filladler32(unsigned char *buffer, unsigned int size);
int checkadler32(unsigned char *buffer, unsigned int size) ;
void fillcrc32to(unsigned char *buffer, unsigned int size, unsigned char *outbuffer);
void fillcrc32(unsigned char *buffer, unsigned int size);
#endif /* crc32_h */
