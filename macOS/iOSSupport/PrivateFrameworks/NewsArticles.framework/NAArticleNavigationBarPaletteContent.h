//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NewsArticles/TUBarPaletteContents-Protocol.h>

@interface NAArticleNavigationBarPaletteContent : UIView <TUBarPaletteContents>
{
    // Error parsing type: , name: fadingBar
    // Error parsing type: , name: opaqueBar
    // Error parsing type: , name: horizontalScrollOffset
    // Error parsing type: , name: audioButtonLocation
}

+ (double)paletteHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)paletteHeight;
- (void)compressWithScale:(double)arg1 opacity:(double)arg2;
- (id)setPaletteColorWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2 primaryVisibilityFactor:(double)arg3;
- (void)setBarColorFor:(id)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 primaryVisibilityFactor:(double)arg4;
- (void)setBarColor:(id)arg1;
- (void)setHorizontalScrollOffset:(double)arg1 audioButtonLocation:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

