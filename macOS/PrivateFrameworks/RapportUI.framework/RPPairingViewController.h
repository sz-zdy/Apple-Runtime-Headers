//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSObject, NSProgressIndicator, NSTextField, RPPINEntryView, RPPairingUIController;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface RPPairingViewController : NSViewController
{
    NSTextField *_messageTextField;
    RPPINEntryView *_pinEntryView;
    NSTextField *_pinLabel1;
    NSTextField *_pinLabel2;
    NSTextField *_pinLabel3;
    NSTextField *_pinLabel4;
    NSTextField *_pinLabel5;
    NSTextField *_pinLabel6;
    NSProgressIndicator *_progressView;
    NSTextField *_progressTextField;
    NSButton *_cancelButton;
    NSButton *_okButton;
    NSObject<OS_dispatch_source> *_promptTimer;
    unsigned long long _retryDeadlineTicks;
    BOOL _retryPending;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _tryingPIN;
    BOOL _prompted;
    RPPairingUIController *_mainController;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL prompted; // @synthesize prompted=_prompted;
@property(retain, nonatomic) RPPairingUIController *mainController; // @synthesize mainController=_mainController;
- (void)_retryTimer;
- (void)promptWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)pairingError:(id)arg1;
- (void)_handlePINEntered:(id)arg1;
- (void)handleOKButton:(id)arg1;
- (void)handleCancelButton:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillAppear;

@end

