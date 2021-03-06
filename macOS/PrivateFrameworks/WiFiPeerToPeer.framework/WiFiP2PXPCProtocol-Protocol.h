//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WiFiPeerToPeer/NSObject-Protocol.h>

@class WiFiAwareDatapathConfiguration, WiFiAwarePublishConfiguration, WiFiAwareSubscribeConfiguration;

@protocol WiFiP2PXPCProtocol <NSObject>
- (void)createDatapathWithConfiguration:(WiFiAwareDatapathConfiguration *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)createPublishWithConfiguration:(WiFiAwarePublishConfiguration *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)createSubscribeWithConfiguration:(WiFiAwareSubscribeConfiguration *)arg1 completionHandler:(void (^)(long long))arg2;
@end

