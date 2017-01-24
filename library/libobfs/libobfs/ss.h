//
//  ss.h
//  libobfs
//
//  Created by A.BIG.T on 11/2/16.
//  Copyright © 2016 A.BIG.T. All rights reserved.
//

#ifndef ss_h
#define ss_h

#include <stdio.h>
int ss_sha1_hmac_with_key(char *auth, char *msg, int msg_len, uint8_t *auth_key, int key_len);
int ss_sha1_hmac(char *auth, char *msg, int msg_len, uint8_t *iv);
int ss_md5_hmac_with_key(char *auth, char *msg, int msg_len, uint8_t *auth_key, int key_len);
int base64_encode(char *encrypt_key,int user_key_len, char encrypt_key_base64);
int bytes_to_key_with_size(char *encrypt_key_base64, int enc_key_len, uint8_t *enc_key, int len);
int ss_aes_128_cbc(char *encrypt, char *encrypt_data, char *enc_key);
int ss_md5_hash_func(char *auth, char *msg, int msg_len);
int ss_sha1_hash_func(char *auth, char *msg, int msg_len);
#endif /* ss_h */
