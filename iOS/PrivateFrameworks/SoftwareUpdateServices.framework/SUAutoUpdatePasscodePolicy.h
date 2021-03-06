//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface SUAutoUpdatePasscodePolicy : NSObject
{
    NSHashTable *_queue_observers;
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    int _stateChangedNotifyToken;
    unsigned long long _queue_currentPolicyType;
}

+ (id)sharedInstance;
- (id)description;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)setCurrentPolicyType:(unsigned long long)arg1;
- (id)stringForCurrentPolicy;
- (_Bool)_isValidPasscodePolicyType:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long currentPolicyType;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

