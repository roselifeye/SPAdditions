//
//  NSString+Addtions.h
//  HKToilet
//
//  Created by Roselifeye on 14-5-6.
//  Copyright (c) 2014年 Roselifeye. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Addtions)

+ (NSString *)getDocumentDirectory;

+ (NSString *)getAppVersion;

+ (NSString *)getBuildVersion;

- (BOOL)isEmail;

- (BOOL)isPhoneNumber;

@end
