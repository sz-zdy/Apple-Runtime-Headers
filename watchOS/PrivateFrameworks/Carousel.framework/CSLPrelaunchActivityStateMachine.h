//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSLPrelaunchActivityManager, CSLSConcurrentObserverStore;

@interface CSLPrelaunchActivityStateMachine : NSObject
{
    CSLSConcurrentObserverStore *_observers;
    CSLPrelaunchActivityManager *_prelaunchActivityManager;
    int _state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) __weak CSLPrelaunchActivityManager *prelaunchActivityManager; // @synthesize prelaunchActivityManager=_prelaunchActivityManager;
- (id)description;
- (void)_asyncNotifyObserversOfChangeToState:(int)arg1 fromState:(int)arg2;
- (_Bool)transitionToStateIfNecessary:(int)arg1;
- (_Bool)_validTransition:(int)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithPrelaunchActivityManager:(id)arg1;

@end

