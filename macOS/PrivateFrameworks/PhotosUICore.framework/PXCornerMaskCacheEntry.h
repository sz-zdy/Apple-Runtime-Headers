//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage;

@interface PXCornerMaskCacheEntry : NSObject
{
    NSImage *_image;
    CDStruct_2bd92d94 _cornerRadius;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) CDStruct_2bd92d94 cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)description;
- (id)initWithCornerRadius:(CDStruct_2bd92d94)arg1 size:(struct CGSize)arg2 image:(id)arg3;

@end

