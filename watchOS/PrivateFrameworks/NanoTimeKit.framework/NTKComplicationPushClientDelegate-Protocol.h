//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class NTKComplicationPushClient;

@protocol NTKComplicationPushClientDelegate <NSObject>
- (void)clientRequestingComplicationUnregister:(NTKComplicationPushClient *)arg1;
- (void)clientRequestingComplicationRegister:(NTKComplicationPushClient *)arg1;
- (void)clientXPCConnectionDidDisconnect:(NTKComplicationPushClient *)arg1;
@end

