//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSectionGeometryTranslator : NSObject
{
    struct CGSize _contentSize;
    unsigned long long _layoutAxis;
    BOOL _layoutRTL;
    struct NSDirectionalEdgeInsets _supplementaryInsets;
    struct NSDirectionalEdgeInsets _sectionInsets;
    struct CGRect _contentFrame;
    struct CGRect _effectiveFrame;
}

- (void)_computeFrames;
@property(readonly, nonatomic) struct CGRect effectiveFrame;
@property(readonly, nonatomic) struct CGSize effectiveContentSize;
@property(readonly, nonatomic) struct CGSize auxillaryHostContentSize;
@property(readonly, nonatomic) struct CGSize contentSize;
- (id)description;
- (struct CGRect)contentRectForSectionRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect contentFrame;
@property(readonly, nonatomic) struct CGPoint contentOffset;
- (id)initWithContentSize:(struct CGSize)arg1 layoutAxis:(unsigned long long)arg2 layoutRTL:(BOOL)arg3 sectionInsets:(struct NSDirectionalEdgeInsets)arg4 supplementaryInsets:(struct NSDirectionalEdgeInsets)arg5;

@end

