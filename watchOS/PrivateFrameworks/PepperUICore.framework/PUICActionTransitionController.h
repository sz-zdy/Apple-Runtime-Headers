//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PepperUICore/UIViewControllerInteractiveTransitioning-Protocol.h>

@class NSString;
@protocol UIViewControllerContextTransitioning;

@interface PUICActionTransitionController : NSObject <UIViewControllerInteractiveTransitioning>
{
    id <UIViewControllerContextTransitioning> _context;
    CDUnknownBlockType _onDismissBlock;
    _Bool _isDismissing;
    _Bool _cancelled;
    _Bool _finished;
}

+ (id)dismissControllerWithOnDismissBlock:(CDUnknownBlockType)arg1;
+ (id)presentationController;
- (void).cxx_destruct;
- (void)_reset;
- (void)finishTransition;
- (void)cancelTransition;
- (_Bool)isWaitingToFinish;
- (_Bool)isTransitioning;
- (void)startInteractiveTransition:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) int completionCurve;
@property(readonly, nonatomic) float completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

