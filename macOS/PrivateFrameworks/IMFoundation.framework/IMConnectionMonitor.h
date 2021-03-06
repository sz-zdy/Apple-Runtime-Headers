//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IMConnectionMonitorDelegate;

@interface IMConnectionMonitor : NSObject
{
    NSString *_remoteHost;
    id <IMConnectionMonitorDelegate> _delegate;
}

+ (id)alloc;
@property(nonatomic) id <IMConnectionMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) NSString *remoteHost; // @synthesize remoteHost=_remoteHost;
@property(readonly, nonatomic) BOOL isImmediatelyReachable;
@property(readonly, nonatomic) BOOL requiresDataConnectionActivation;
@property(nonatomic, setter=setDataConnectionActive:) BOOL isDataConnectionActive;
- (void)clear;
- (void)goDisconnected;
- (void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (void)_setup;
- (void)dealloc;
- (id)initWithRemoteHost:(id)arg1 delegate:(id)arg2;

@end

