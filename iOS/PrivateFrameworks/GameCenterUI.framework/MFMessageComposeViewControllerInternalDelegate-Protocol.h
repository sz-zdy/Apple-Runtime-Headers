//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/MFMessageComposeViewControllerDelegate-Protocol.h>

@class MFMessageComposeViewController, NSArray, NSString;

@protocol MFMessageComposeViewControllerInternalDelegate <MFMessageComposeViewControllerDelegate>
- (void)messageComposeViewController:(MFMessageComposeViewController *)arg1 shouldSendMessage:(NSString *)arg2 toRecipients:(NSArray *)arg3 completion:(void (^)(_Bool))arg4;

@optional
- (void)messageComposeViewControllerDidShowEntryViewContent:(MFMessageComposeViewController *)arg1;
@end

