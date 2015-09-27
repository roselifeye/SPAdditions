//
//  NSDate+Addtions.h
//  
//
//  Created by Roselifeye on 14-5-10.
//  Copyright (c) 2014年 Roselifeye. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Addtions)

+ (BOOL)isNightWithMorning:(NSInteger)morning
                  andNight:(NSInteger)night;

+ (NSDate *)beginToday;
+ (NSDate *)beginYesterday;
+ (NSDate *)endYesterday;
+ (NSDate *)beginDayBeforeYesterday;
+ (NSDate *)endDayBeforeYesterday;

+ (NSDate *)dateWithYear:(NSUInteger)year
                   Month:(NSUInteger)month
                     Day:(NSUInteger)day
                    Hour:(NSUInteger)hour
                  Minute:(NSUInteger)minute
                  Second:(NSUInteger)second;


+ (NSDateFormatter *)defaultDateFormatterWithFormatYYYYMMddHHmmss;
+ (NSDateFormatter *)defaultDateFormatterWithFormatYYYYMMdd;
+ (NSDateFormatter *)defaultDateFormatterWithFormatMMddHHmm;

+ (NSDateFormatter *)defaultDateFormatterWithFormatYYYYMMddHHmmInChinese;
+ (NSDateFormatter *)defaultDateFormatterWithFormatMMddHHmmInChinese;

- (NSDateComponents *)componentsOfDay;
- (NSUInteger)year;
- (NSUInteger)month;
- (NSUInteger)day;
- (NSUInteger)hour;
- (NSUInteger)minute;
- (NSUInteger)second;
- (NSUInteger)weekday;
- (NSUInteger)weekOfDayInYear;

- (NSDate *)workBeginTime;
- (NSDate *)workEndTime;

- (NSDate *)oneHourLater;

- (NSDate *)sameTimeOfDate;

- (BOOL)sameDayWithDate:(NSDate *)otherDate;

- (BOOL)sameWeekWithDate:(NSDate *)otherDate;

- (BOOL)sameMonthWithDate:(NSDate *)otherDate;

- (NSString *)stringOfDateWithFormatYYYYMMddHHmmss;
- (NSString *)stringOfDateWithFormatYYYYMMdd;
- (NSString *)stringOfDateWithFormatMMddHHmm;
- (NSString *)stringOfDateWithFormatYYYYMMddHHmmInChinese;
- (NSString *)stringOfDateWithFormatMMddHHmmInChinese;


@end
