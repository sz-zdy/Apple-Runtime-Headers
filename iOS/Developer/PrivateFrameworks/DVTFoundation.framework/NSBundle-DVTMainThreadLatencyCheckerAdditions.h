//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSBundle.h>

@class NSString;

@interface NSBundle (DVTMainThreadLatencyCheckerAdditions)
+ (id)dvt_uncachedInfoAtPath:(id)arg1;
+ (id)dvt_uncachedInfoAtURL:(id)arg1;
+ (id)_uncachedValueForKey:(const struct __CFString *)arg1 atURL:(id)arg2;
+ (struct __CFBundle *)dvt_createUncachedBundleAtURL:(id)arg1;
+ (id)_uncachedBundleStringForKey:(const struct __CFString *)arg1 AtURL:(id)arg2;
+ (id)dvt_uncachedValueForKey:(id)arg1 inBundleAtPath:(id)arg2;
+ (id)dvt_uncachedExtensionInfoAtPath:(id)arg1;
+ (id)dvt_uncachedBundleExecutableAtPath:(id)arg1;
+ (id)dvt_uncachedBundleIdentifierAtPath:(id)arg1;
+ (id)dvt_uncachedBundleExecutableAtURL:(id)arg1;
+ (id)dvt_uncachedBundleIdentifierAtURL:(id)arg1;
+ (_Bool)dvt_watchOnlyAppAtPath:(id)arg1;
+ (_Bool)dvt_watchAppRunsIndependentlyAtPath:(id)arg1;
+ (_Bool)dvt_isiOSShimAppAtPath:(id)arg1;
- (_Bool)__DVTMainThreadLatencyChecker__loadAndReturnError:(id *)arg1;
@property(readonly, nonatomic) NSString *dvt_contentsPath;
@end

