//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKUpNextComplicationView.h>

@class UIColor;

@interface NTKUpNextBezelComplicationView : NTKUpNextComplicationView
{
    float _bezelLabelCircularRadius;
    int _theme;
    UIColor *_bezelTextColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *bezelTextColor; // @synthesize bezelTextColor=_bezelTextColor;
@property(readonly, nonatomic) int theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) float bezelLabelCircularRadius; // @synthesize bezelLabelCircularRadius=_bezelLabelCircularRadius;
- (void)_setView:(id)arg1 forSideAtIndex:(int)arg2;
@property(readonly, nonatomic) float currentBezelTextWidth;
- (void)setBezelTextColor:(id)arg1;
- (void)_enumerateBezelViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)setTheme:(int)arg1;
- (void)setBezelLabelCircularRadius:(float)arg1;

@end

