//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AAUIDeviceLocatorService : NSObject
{
    unsigned long long _lastKnownState;
    _Bool _hasAttemptedToFetchState;
    _Bool _wantsToEnable;
    NSObject<OS_dispatch_queue> *_stateUpdateQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)shouldEnable;
- (void)setShouldEnable:(_Bool)arg1;
- (void)disableInContext:(unsigned long long)arg1 withWipeToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)disableInContext:(unsigned long long)arg1 withWipeToken:(id)arg2;
- (void)enableInContext:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableInContext:(unsigned long long)arg1;
- (void)refreshCurrentState:(CDUnknownBlockType)arg1;
- (void)_updateStateAndNotify:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isStateKnown;
- (_Bool)isChangingState;
- (_Bool)isEnabled;
- (id)init;

@end

