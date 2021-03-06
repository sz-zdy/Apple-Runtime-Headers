//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ACSimpleRateLimiter : NSObject
{
    unsigned long long _maximum;
    double _timeInterval;
    NSLock *_instanceLock;
    NSMutableArray *_sortedActionDates;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *sortedActionDates; // @synthesize sortedActionDates=_sortedActionDates;
@property(retain) NSLock *instanceLock; // @synthesize instanceLock=_instanceLock;
@property(readonly) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly) unsigned long long maximum; // @synthesize maximum=_maximum;
- (void)locked_addDate:(id)arg1;
- (void)locked_removeDatesBefore:(id)arg1;
- (unsigned long long)locked_indexOfFirstAfter:(id)arg1;
@property(readonly) NSDate *rateLimitingStartDate;
- (BOOL)isEmptyAfterFlushing;
- (BOOL)reservePerformActionNow;
- (id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2;

@end

