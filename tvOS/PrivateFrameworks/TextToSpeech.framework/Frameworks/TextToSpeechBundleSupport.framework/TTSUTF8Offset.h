//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTSUTF8Offset : NSObject
{
    long long _cStringOffset;
    long long _actualPos;
    long long _actualLength;
    long long _lengthDifference;
}

@property(nonatomic) long long lengthDifference; // @synthesize lengthDifference=_lengthDifference;
@property(nonatomic) long long actualLength; // @synthesize actualLength=_actualLength;
@property(nonatomic) long long actualPos; // @synthesize actualPos=_actualPos;
@property(nonatomic) long long cStringOffset; // @synthesize cStringOffset=_cStringOffset;
- (id)description;

@end

