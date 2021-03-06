//
//  NSDate+KMKit.h
//  Template
//
//  Created by Wingstech Solutions Pvt. Ltd. on 10/07/14.
//  Copyright (c) 2014 Wingstech Solutions Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

#define secondsIn1Day 86400

@interface NSDate (KMKit)

- (NSString *)stringFormat;

- (NSUInteger) daysAgo;
- (NSUInteger) hoursAgo;
- (NSUInteger) daysAgoAgainstMidnight;
- (NSString *) stringDaysAgo;
- (NSString *) stringDaysAgoAgainstMidnight:(BOOL)flag;
- (NSUInteger) weekday;
- (NSTimeInterval) unixTime;

+ (NSDate *) dateFromString:(NSString *)string;
+ (NSDate *) dateFromString:(NSString *)string withFormat:(NSString *)format;
+ (NSString *) stringFromDate:(NSDate *)date withFormat:(NSString *)string;
+ (NSString *) stringFromDate:(NSDate *)date;
+ (NSString *) stringForDisplayFromDate:(NSDate *)date;
+ (NSString *) stringForDisplayFromDate:(NSDate *)date prefixed:(BOOL)prefixed;
+ (NSString *) stringForDisplayFromDate:(NSDate *)date prefixed:(BOOL)prefixed alwaysDisplayTime:(BOOL)displayTime;

- (NSString *) string;
- (NSString *) stringWithFormat:(NSString *)format;
- (NSString *) stringWithDateStyle:(NSDateFormatterStyle)dateStyle timeStyle:(NSDateFormatterStyle)timeStyle;

- (NSDate *) beginningOfWeek;
- (NSDate *) beginningOfDay;
- (NSDate *) endOfWeek;

+ (NSString *) dateFormatString;
+ (NSString *) timeFormatString;
+ (NSString *) timestampFormatString;
+ (NSString *) dbFormatString;
- (NSString *)stringWithFormat;

@end
