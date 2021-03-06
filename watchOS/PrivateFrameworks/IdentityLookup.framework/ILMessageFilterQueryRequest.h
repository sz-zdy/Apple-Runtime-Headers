//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IdentityLookup/NSSecureCoding-Protocol.h>

@class NSString;

@interface ILMessageFilterQueryRequest : NSObject <NSSecureCoding>
{
    NSString *_sender;
    NSString *_messageBody;
    NSString *_extensionIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(copy, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqualToRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithExtensionIdentifier:(id)arg1;

@end

