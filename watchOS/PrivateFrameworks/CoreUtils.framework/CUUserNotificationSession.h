//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/UNUserNotificationCenterDelegate-Protocol.h>

@class NSArray, NSError, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUUserNotificationSession : NSObject <UNUserNotificationCenterDelegate>
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSString *_requestIdentifier;
    int _state;
    NSError *_stepError;
    int _stepState;
    NSObject<OS_dispatch_source> *_timer;
    UNUserNotificationCenter *_unCenter;
    struct LogCategory *_ucat;
    CDUnknownBlockType _actionHandler;
    NSString *_bodyKey;
    NSArray *_bodyArguments;
    NSString *_bundleID;
    NSString *_categoryID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned int _flags;
    NSString *_header;
    NSString *_iconAppIdentifier;
    NSString *_iconName;
    NSString *_iconPath;
    NSString *_identifier;
    NSString *_label;
    int _soundAlertType;
    NSString *_subtitleKey;
    NSArray *_subtitleArguments;
    NSString *_titleKey;
    NSArray *_titleArguments;
    double _timeoutSeconds;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *titleArguments; // @synthesize titleArguments=_titleArguments;
@property(copy, nonatomic) NSString *titleKey; // @synthesize titleKey=_titleKey;
@property(nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(copy, nonatomic) NSArray *subtitleArguments; // @synthesize subtitleArguments=_subtitleArguments;
@property(copy, nonatomic) NSString *subtitleKey; // @synthesize subtitleKey=_subtitleKey;
@property(nonatomic) int soundAlertType; // @synthesize soundAlertType=_soundAlertType;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) NSString *iconAppIdentifier; // @synthesize iconAppIdentifier=_iconAppIdentifier;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSArray *bodyArguments; // @synthesize bodyArguments=_bodyArguments;
@property(copy, nonatomic) NSString *bodyKey; // @synthesize bodyKey=_bodyKey;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_runResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_runRequestAddStart:(id *)arg1;
- (void)_runAuthorizeRequestStart;
- (void)_runAuthorizeCheckStart;
- (_Bool)_runInit:(id *)arg1;
- (void)_run;
- (void)_reportTimeout;
- (void)_reportError:(id)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

