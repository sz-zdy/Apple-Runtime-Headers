//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Slideshows/MRTransition.h>

@class MROrigamiAnimationPath;

@interface MRTransitionOrigamiFold : MRTransition
{
    MROrigamiAnimationPath *mBigSwing;
    MROrigamiAnimationPath *mSideSwing;
}

- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)controlsLayersTime;
- (void)_cleanupSwingTimings;
- (void)_setupSwingTimings;
- (void)cleanup;
- (id)initWithTransitionID:(id)arg1;

@end

