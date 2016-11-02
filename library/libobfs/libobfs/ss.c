//
//  ss.c
//  libobfs
//
//  Created by A.BIG.T on 11/2/16.
//  Copyright © 2016 A.BIG.T. All rights reserved.
//

#include "ss.h"
#include "obfs.h"
#include <stdlib.h>
 #include <string.h>
#define MAX_IV_LENGTH 0
#define MAX_KEY_LENGTH 0
int  enc_iv_len = 16;
char enc_key[128];
int enc_key_len = 16;
int ss_sha1_hmac_with_key(char *auth, char *msg, int msg_len, uint8_t *auth_key, int key_len)
{
    
#warning "no imp"
    return 0;
}
int ss_sha1_hmac(char *auth, char *msg, int msg_len, uint8_t *iv)
{
#warning "no imp"   
    
    return 0;
}
