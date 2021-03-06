//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVNonDigitizerTapRecognizer, AVPermissiveSwipeGestureRecognizer, UITapGestureRecognizer, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface AVxCustomOverlayHostViewController : UIViewController
{
    UITapGestureRecognizer *_menuTapGestureRecognizer;
    AVNonDigitizerTapRecognizer *_downArrowTapGestureRecognizer;
    AVPermissiveSwipeGestureRecognizer *_swipeDownGestureRecognizer;
    _Bool _isTouching;
    _Bool _enforcingMargins;
    UIVisualEffectView *_backgroundView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, getter=isEnforcingMargins) _Bool enforcingMargins; // @synthesize enforcingMargins=_enforcingMargins;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_handleDownArrowGesture:(id)arg1;
- (void)_handleSwipeDownGesture:(id)arg1;
- (void)_handleMenuTapGesture:(id)arg1;
- (void)autoDismissAfterDelay;
- (void)cancelAutoDismiss;
- (void)_timeoutDismissal;
- (void)_dismiss;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_updatePresentationStyleAfterLayout;
- (void)_updateCornerCurves:(_Bool)arg1;
- (void)_updatePresentationStyle;
- (void)loadView;
@property(readonly, nonatomic) UIViewController *hostedViewController;
- (void)dealloc;

@end

