//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface CPLResetReason : NSObject <NSSecureCoding>
{
    _Bool _tentative;
    NSString *_uuid;
    NSDate *_date;
    NSString *_reason;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool tentative; // @synthesize tentative=_tentative;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reasonDescriptionWithNow:(id)arg1;
@property(readonly, copy, nonatomic) id asPlist;
- (id)initWithPlist:(id)arg1;
- (id)initWithDate:(id)arg1 reason:(id)arg2;

@end

