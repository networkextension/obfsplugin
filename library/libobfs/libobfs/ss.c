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
int ss_md5_hmac_with_key(char *auth, char *msg, int msg_len, uint8_t *auth_key, int key_len)
{
#warning "no imp"
    
    return 0;
}
int base64_encode(char *encrypt_key,int user_key_len, char encrypt_key_base64)
{
#warning "no imp"
    return 0;
}
int bytes_to_key_with_size(char *encrypt_key_base64, int enc_key_len, uint8_t *enc_key, int len)
{
#warning "no imp"
    return 0;
}
int ss_aes_128_cbc(char *encrypt, char *encrypt_data, char *enc_key)
{
#warning "no imp"
    return 0;
}
int ss_md5_hash_func(char *auth, char *msg, int msg_len)
{//https://github.com/shadowsocksr/shadowsocksr-libev/blob/cf80f32e60b2c7f209eeba71e5ec1f0b5cd4ce73/src/encrypt.c
#warning "no imp"
    return 0;
}
int ss_sha1_hash_func(char *auth, char *msg, int msg_len)
{
#warning "no imp"
    return 0;
}
