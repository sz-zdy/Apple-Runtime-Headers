//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface CKLargeTitleAccessoryView : UIView
{
    UIButton *_leftAccessoryButton;
    UIButton *_rightAccessoryButton;
}

+ (id)newOptionsButton;
+ (id)newComposeButton;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *rightAccessoryButton; // @synthesize rightAccessoryButton=_rightAccessoryButton;
@property(retain, nonatomic) UIButton *leftAccessoryButton; // @synthesize leftAccessoryButton=_leftAccessoryButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

