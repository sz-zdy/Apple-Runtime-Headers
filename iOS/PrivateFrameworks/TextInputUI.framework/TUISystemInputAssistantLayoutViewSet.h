//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TUIAssistantButtonBarView, UIView;

@interface TUISystemInputAssistantLayoutViewSet : NSObject
{
    TUIAssistantButtonBarView *_leftButtonBar;
    TUIAssistantButtonBarView *_rightButtonBar;
    TUIAssistantButtonBarView *_unifiedButtonBar;
    UIView *_centerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) TUIAssistantButtonBarView *unifiedButtonBar; // @synthesize unifiedButtonBar=_unifiedButtonBar;
@property(retain, nonatomic) TUIAssistantButtonBarView *rightButtonBar; // @synthesize rightButtonBar=_rightButtonBar;
@property(retain, nonatomic) TUIAssistantButtonBarView *leftButtonBar; // @synthesize leftButtonBar=_leftButtonBar;

@end

