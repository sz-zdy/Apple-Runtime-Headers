//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <NSCopying>
{
    _Bool _needsRecalc;
    UIPrintPageRenderer *_printPageRenderer;
    float _maximumContentHeight;
    float _maximumContentWidth;
    int _startPage;
    int _pageCount;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _perPageContentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) int startPage; // @synthesize startPage=_startPage;
@property(nonatomic) struct UIEdgeInsets perPageContentInsets; // @synthesize perPageContentInsets=_perPageContentInsets;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) float maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property(nonatomic) float maximumContentHeight; // @synthesize maximumContentHeight=_maximumContentHeight;
@property(nonatomic) __weak UIPrintPageRenderer *printPageRenderer; // @synthesize printPageRenderer=_printPageRenderer;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(int)arg2;
- (struct CGRect)rectForPageAtIndex:(int)arg1;
- (struct CGRect)_pageContentRect:(_Bool)arg1;
- (int)_recalcPageCount;
@property(readonly, nonatomic) int pageCount; // @synthesize pageCount=_pageCount;
- (void)_recalcIfNecessary;
- (void)_setNeedsRecalc;
- (void)removeFromPrintPageRenderer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

