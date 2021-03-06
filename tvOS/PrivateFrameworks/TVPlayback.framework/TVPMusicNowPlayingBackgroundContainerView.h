//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, UIVisualEffectView;
@protocol TVPMusicNowPlayingBackgroundProvider;

@interface TVPMusicNowPlayingBackgroundContainerView : UIView
{
    _Bool _blurAllowed;
    _Bool _shouldBlur;
    NSObject<TVPMusicNowPlayingBackgroundProvider> *_backgroundProvider;
    UIView *_containerView;
    UIVisualEffectView *_blurView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldBlur; // @synthesize shouldBlur=_shouldBlur;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSObject<TVPMusicNowPlayingBackgroundProvider> *backgroundProvider; // @synthesize backgroundProvider=_backgroundProvider;
@property(nonatomic, getter=isBlurAllowed) _Bool blurAllowed; // @synthesize blurAllowed=_blurAllowed;
- (void)_updateForBackgroundContrastState;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_updateBlurEffect;
- (id)initWithFrame:(struct CGRect)arg1;

@end

