//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString, NSURL, QLItemViewController, QLPreviewItemEditedCopy;
@protocol QLRemotePopoverTracker;

@protocol QLPreviewItemViewControllerDelegate <NSObject>
- (long long)dragDataOwnerForPreviewItemViewController:(QLItemViewController *)arg1;
- (void)previewItemViewController:(QLItemViewController *)arg1 hasUnsavedEdits:(_Bool)arg2;
- (void)previewItemViewControllerDidEditCopyOfPreviewItem:(QLItemViewController *)arg1 editedCopy:(QLPreviewItemEditedCopy *)arg2 completionHandler:(void (^)(void))arg3;
- (void)previewItemViewController:(QLItemViewController *)arg1 didEnableEditMode:(_Bool)arg2;
- (NSString *)loadingTextForPreviewItemViewController:(QLItemViewController *)arg1;
- (void)expandContentOfPreviewItemViewController:(QLItemViewController *)arg1 unarchivedItemsURL:(NSURL *)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsToForwardMessageToHost:(NSDictionary *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)previewItemViewControllerDidChangeCurrentPreviewController:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsToDismissQuickLook:(QLItemViewController *)arg1;
- (void)previewItemViewControllerDidUpdatePreferredContentSize:(QLItemViewController *)arg1;
- (void)previewItemViewControllerDidUpdateTitle:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsUpdatePrinter:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(QLItemViewController *)arg1;
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsToOpenURL:(NSURL *)arg2;
- (void)previewItemViewControllerWantsUpdateKeyCommands:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsUpdateOverlay:(QLItemViewController *)arg1 animated:(_Bool)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsToShowShareSheetWithPopoverTracker:(id <QLRemotePopoverTracker>)arg2 customSharedURL:(NSURL *)arg3 dismissCompletion:(void (^)(void))arg4;
- (void)previewItemViewControllerWantsToShowShareSheet:(QLItemViewController *)arg1;
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsFullScreen:(_Bool)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 didFailWithError:(NSError *)arg2;
@end

