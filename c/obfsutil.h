//
//  obfsutil.h
//  libobfs
//
//  Created by 孔祥波 on 24/01/2017.
//  Copyright © 2017 Kong XiangBo. All rights reserved.
//

#ifndef obfsutil_h
#define obfsutil_h

int get_head_size(char *plaindata, int size, int def_size);
void init_shift128plus(void);
uint64_t xorshift128plus(void);
extern const int ONETIMEAUTH_BYTES ;
#endif /* obfsutil_h */
