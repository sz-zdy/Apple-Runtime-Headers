//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIKeyCommandDiscoverabilityHUDVisualStyle-Protocol.h>

@class NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDVisualStyle : NSObject <UIKeyCommandDiscoverabilityHUDVisualStyle>
{
}

+ (id)visualStyleForTraitCollection:(id)arg1;
- (float)columnDividerHeightForHUDHeight:(float)arg1;
- (float)maxHUDHeightForHeight:(float)arg1;
- (float)maxHUDWidthForWidth:(float)arg1;

// Remaining properties
@property(readonly, nonatomic) float HUDPageControlBottomMargin; // @dynamic HUDPageControlBottomMargin;
@property(readonly, nonatomic) struct UIEdgeInsets HUDViewInsets; // @dynamic HUDViewInsets;
@property(readonly, nonatomic) float columnDividerWidth; // @dynamic columnDividerWidth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIColor *dividerColor; // @dynamic dividerColor;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) UIColor *inputColor; // @dynamic inputColor;
@property(readonly, nonatomic) float minimumFontScaleBeforeTruncation; // @dynamic minimumFontScaleBeforeTruncation;
@property(readonly, nonatomic) float summaryDescriptionToModifiersSpacing; // @dynamic summaryDescriptionToModifiersSpacing;
@property(readonly, nonatomic) UIFont *summaryFont; // @dynamic summaryFont;
@property(readonly, nonatomic) float summaryLineHeight; // @dynamic summaryLineHeight;
@property(readonly, nonatomic) float summaryLineSpacing; // @dynamic summaryLineSpacing;
@property(readonly, nonatomic) float summaryModifiersSpacing; // @dynamic summaryModifiersSpacing;
@property(readonly, nonatomic) float summaryXPadding; // @dynamic summaryXPadding;
@property(readonly, nonatomic) float summaryYPadding; // @dynamic summaryYPadding;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIColor *titleColor; // @dynamic titleColor;

@end

