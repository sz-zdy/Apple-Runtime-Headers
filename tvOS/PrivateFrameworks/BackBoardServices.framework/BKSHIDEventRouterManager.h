//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>
#import <BackBoardServices/_BKSHIDEventRouterDelegate-Protocol.h>

@class BKSHIDEventDeliveryManager, NSArray, NSMutableArray, NSString;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKSHIDEventRouterManager : NSObject <_BKSHIDEventRouterDelegate, BSDescriptionProviding>
{
    BKSHIDEventDeliveryManager *_deliveryManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_routers;
    _Bool _queue_needsFlush;
    id <BSInvalidatable> _queue_dispatchingRulesAssertion;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_queue_routerDidChange:(id)arg1;
- (id)_queue_succinctDescriptionBuilder;
- (void)_queue_flush;
- (id)_targetForDestination:(long long)arg1;
@property(retain, nonatomic) NSArray *eventRouters; // @dynamic eventRouters;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithDeliveryManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

