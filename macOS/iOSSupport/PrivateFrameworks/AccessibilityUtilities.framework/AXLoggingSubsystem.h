//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXLoggingSubsystem : NSObject
{
    BOOL _ignoreLogging;
}

+ (BOOL)willLogDebug;
+ (BOOL)willLogInfo;
+ (BOOL)willLog;
+ (int)defaultLogLevel;
+ (double)threshold;
+ (BOOL)shouldProcessMessageForLogs;
+ (BOOL)shouldIncludeFileLineAndFunctionInLogs;
+ (BOOL)shouldIncludeBacktraceInLogs;
+ (id)identifier;
+ (id)wrapError:(id)arg1 description:(id)arg2;
+ (id)errorWithDescription:(id)arg1;
+ (id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2;
+ (id)subsystems;
+ (void)initializeSubsytem;
+ (void)initialize;
+ (id)sharedInstance;
@property(nonatomic) BOOL ignoreLogging;

@end

