//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVSystemUI/NSObject-Protocol.h>

@class NSArray, NSError, TVSUIRemoteHostViewController;

@protocol TVSUIRemoteHostViewControllerDelegate <NSObject>
- (void)hostRemoteViewController:(TVSUIRemoteHostViewController *)arg1 didReceiveRemoteAnimationState:(long long)arg2;
- (void)hostRemoteViewController:(TVSUIRemoteHostViewController *)arg1 didReceiveRemoteItems:(NSArray *)arg2 withReply:(void (^)(NSArray *, NSError *))arg3;
- (void)hostRemoteViewControllerDidExit:(TVSUIRemoteHostViewController *)arg1 withError:(NSError *)arg2;
- (void)hostRemoteViewController:(TVSUIRemoteHostViewController *)arg1 requestsDismissWithItems:(NSArray *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
@end

