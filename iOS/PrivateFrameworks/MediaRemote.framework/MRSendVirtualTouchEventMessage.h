//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

__attribute__((visibility("hidden")))
@interface MRSendVirtualTouchEventMessage : MRProtocolMessage
{
}

- (unsigned long long)priority;
- (unsigned long long)type;
@property(readonly, nonatomic) unsigned long long virtualDeviceID;
@property(readonly, nonatomic) struct _MRHIDTouchEvent event;
- (id)initWithTouchEvent:(struct _MRHIDTouchEvent)arg1 virtualDeviceID:(unsigned long long)arg2;

@end

