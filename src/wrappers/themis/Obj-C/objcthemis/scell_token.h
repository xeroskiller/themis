/*
* Copyright (c) 2015 Cossack Labs Limited
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#import <Foundation/Foundation.h>
#import <themis/themis.h>
#import <objcthemis/scell.h>

@interface SCellTokenEncryptedData : NSObject{
  NSMutableData* cipher_text;
  NSMutableData* token;
};

- (id)init;
- (NSMutableData *)getCipherText;
- (NSMutableData *)getToken;
- (void)setCipherData:(NSMutableData*)data;
- (void)setToken:(NSMutableData*)data;

@end


@interface SCell_token : SCell

- (id)initWithKey: (NSData*)key;
- (SCellTokenEncryptedData*)wrap: (NSData*)message error:(NSError**)errorPtr;
- (NSData*)unwrap: (SCellTokenEncryptedData*)message error:(NSError**)errorPtr;
- (SCellTokenEncryptedData*)wrap: (NSData*)message context:(NSData*)contex error:(NSError**)errorPtr;
- (NSData*)unwrap: (SCellTokenEncryptedData*)message context:(NSData*)contex error:(NSError**)errorPtr;

@end
