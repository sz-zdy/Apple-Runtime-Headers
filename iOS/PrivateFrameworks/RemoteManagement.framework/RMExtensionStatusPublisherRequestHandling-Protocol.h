//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteManagement/NSObject-Protocol.h>

@class NSArray, RMManagementChannel;

@protocol RMExtensionStatusPublisherRequestHandling <NSObject>
- (void)queryForStatusWithKeyPaths:(NSArray *)arg1 onBehalfOfManagementChannel:(RMManagementChannel *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
@end

