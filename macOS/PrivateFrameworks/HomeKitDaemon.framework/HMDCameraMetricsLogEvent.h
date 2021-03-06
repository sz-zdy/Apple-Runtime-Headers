//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@class HMDAccessory, HMDCameraSessionID;

@interface HMDCameraMetricsLogEvent : HMDLogEvent
{
    BOOL _isLocal;
    HMDCameraSessionID *_sessionID;
    HMDAccessory *_accessory;
}

- (void).cxx_destruct;
@property(readonly) BOOL isLocal; // @synthesize isLocal=_isLocal;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (id)initWithMetricUUID:(id)arg1 sessionID:(id)arg2 cameraAccessory:(id)arg3 isLocal:(BOOL)arg4;

@end

