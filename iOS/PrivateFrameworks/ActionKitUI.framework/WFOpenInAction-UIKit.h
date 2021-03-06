//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/WFOpenInAction.h>

#import <ActionKitUI/UIDocumentInteractionControllerDelegatePrivate-Protocol.h>

@class NSString, UIDocumentInteractionController, WFFileRepresentation;

@interface WFOpenInAction (UIKit) <UIDocumentInteractionControllerDelegatePrivate>
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
@property(retain, nonatomic) WFFileRepresentation *retainedFile;
@property(nonatomic) __weak WFFileRepresentation *sendingFile;
@property(retain, nonatomic) UIDocumentInteractionController *document;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

