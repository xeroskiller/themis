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

typedef enum{
  TErrorTypeSuccess=0,
  TErrorTypeBufferTooSmall=-4,
  TErrorTypeFail=-1,
  TErrorTypeSendAsIs=1
} TErrorType;

#define SCERROR(error_code, error_message)				\
  [NSError errorWithDomain:@"com.CossackLabs.Themis.ErrorDomain"	\
  code:error_code \
  userInfo:[[NSDictionary alloc] initWithObjectsAndKeys:error_message, @"NSLocalizedDescriptionKey",NULL]]
