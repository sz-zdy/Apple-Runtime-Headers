//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, VUIBackdropView;

__attribute__((visibility("hidden")))
@interface VUIBackdropMaskingView : UIView
{
    CAGradientLayer *_gradientLayer;
    VUIBackdropView *_backdropView;
    double _gradientScale;
    double _gradientStop;
}

- (void).cxx_destruct;
@property(nonatomic) double gradientStop; // @synthesize gradientStop=_gradientStop;
@property(nonatomic) double gradientScale; // @synthesize gradientScale=_gradientScale;
@property(retain, nonatomic) VUIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

