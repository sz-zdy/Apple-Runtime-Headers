//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUCollectionViewData : NSObject
{
    long long _cachedPageCount;
    struct CGRect _currentContentBounds;
    NSMutableArray *_itemLayoutAttributes;
    NSMutableDictionary *_itemLayoutAttributesByIndexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *itemLayoutAttributesByIndexPath; // @synthesize itemLayoutAttributesByIndexPath=_itemLayoutAttributesByIndexPath;
@property(readonly, nonatomic) NSMutableArray *itemLayoutAttributes; // @synthesize itemLayoutAttributes=_itemLayoutAttributes;
@property(nonatomic) struct CGRect currentContentBounds; // @synthesize currentContentBounds=_currentContentBounds;
@property(readonly, nonatomic) long long cachedPageCount; // @synthesize cachedPageCount=_cachedPageCount;
- (_Bool)hasReferenceIndexPath;
- (void)invalidate;
- (id)init;

@end

