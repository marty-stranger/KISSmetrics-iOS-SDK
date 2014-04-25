//
// KISSmetricsSDK
//
// KMAQueryEncoder.h
//
// Copyright 2014 KISSmetrics
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.



#import <Foundation/Foundation.h>

@interface KMAQueryEncoder : NSObject

- (id)initWithKey:(NSString*)key
       clientType:(NSString*)clientType
        userAgent:(NSString*)userAgent;

- (NSString*)encodeQueryString:(NSString*)queryString;

- (NSString*)encodeIdentity:(NSString*)identity;

- (NSString*)encodeEvent:(NSString*)event;

- (NSString*)encodeProperties:(NSDictionary*)properties;

- (NSString*)createEventQueryWithName:(NSString*)name
                           properties:(NSDictionary*)properties
                             identity:(NSString*)identity
                            timestamp:(NSInteger)timestamp;

- (NSString*)createPropertiesQueryWithProperties:(NSDictionary*)properties
                                        identity:(NSString*)identity
                                       timestamp:(NSInteger)timestamp;

- (NSString*)createAliasQueryWithAlias:(NSString*)alias andIdentity:(NSString*)identity;


@end