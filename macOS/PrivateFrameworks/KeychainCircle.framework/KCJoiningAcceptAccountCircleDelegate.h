//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeychainCircle/KCJoiningAcceptCircleDelegate-Protocol.h>

@class NSString;

@interface KCJoiningAcceptAccountCircleDelegate : NSObject <KCJoiningAcceptCircleDelegate>
{
}

+ (id)delegate;
- (id)circleGetInitialSyncViews:(unsigned int)arg1 error:(id *)arg2;
- (id)circleJoinDataFor:(struct __OpaqueSOSPeerInfo *)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

