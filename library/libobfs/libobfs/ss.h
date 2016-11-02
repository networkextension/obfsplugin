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
#endif /* ss_h */
