//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSKeyedArchiver.h>

@class NSDictionary;

@interface SCNKeyedArchiver : NSKeyedArchiver
{
    BOOL skipMorphTargets;
    NSDictionary *options;
}

+ (id)archivedDataWithRootObject:(id)arg1 options:(id)arg2;
@property(nonatomic) BOOL skipMorphTargets; // @synthesize skipMorphTargets;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options;
- (void)dealloc;

@end

