//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SHLyricLine : NSObject
{
    NSString *_text;
    double _offset;
}

+ (id)lyricLineWithText:(id)arg1 offset:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;

@end

