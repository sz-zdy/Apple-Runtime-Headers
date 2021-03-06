//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface IKOpenGLRoundedRectRenderer : NSObject
{
    NSMutableArray *_roundedRectCaches;
    id _lastRoundedRectUsed;
    double _scaleFactor;
}

@property double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
- (BOOL)renderBezelGroupWithPoints:(struct CGPoint *)arg1 count:(int)arg2 radius:(float)arg3 strokeColor:(float *)arg4 fillColor:(float *)arg5 lineWidth:(int)arg6;
- (void)_drawRoundedBorder:(struct CGPoint *)arg1 radius:(float)arg2 mapRadius:(float)arg3 groupType:(int)arg4 texOut:(unsigned int)arg5 texIn:(unsigned int)arg6 lineWidth:(float)arg7;
- (BOOL)renderRoundedRect:(struct CGRect)arg1 radius:(float)arg2 strokeColor:(float *)arg3 fillColor:(float *)arg4 mode:(int)arg5 lineWidth:(int)arg6;
- (unsigned int)_mapForRadius:(float)arg1 scaleFactor:(float)arg2 strokeColor:(float *)arg3 fillColor:(float *)arg4 mode:(int)arg5 lineWidth:(int)arg6;
- (unsigned int)_createMapForRadius:(float)arg1 scaleFactor:(float)arg2 strokeColor:(float *)arg3 fillColor:(float *)arg4 mode:(int)arg5 lineWidth:(int)arg6;
- (id)_findInCacheMapWithRadius:(float)arg1 scaleFactor:(float)arg2 strokeColor:(float *)arg3 fillColor:(float *)arg4 mode:(int)arg5 lineWidth:(int)arg6;
- (void)dealloc;
- (id)init;

@end

