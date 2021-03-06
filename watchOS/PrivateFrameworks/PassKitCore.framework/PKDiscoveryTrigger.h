//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKDiscoveryTrigger : NSObject <NSSecureCoding, NSCopying>
{
    int _type;
    int _maxActivationCount;
}

+ (_Bool)supportsSecureCoding;
+ (id)discoveryTriggerWithDictionary:(id)arg1;
@property(nonatomic) int maxActivationCount; // @synthesize maxActivationCount=_maxActivationCount;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

