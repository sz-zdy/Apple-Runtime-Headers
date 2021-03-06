//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface SFClientSubCredentialParams : NSObject <NSSecureCoding>
{
    NSString *_adamID;
    NSArray *_adamIDs;
    NSString *_title;
    NSString *_subtitle;
    NSString *_issuerID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *issuerID; // @synthesize issuerID=_issuerID;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *adamIDs; // @synthesize adamIDs=_adamIDs;
@property(copy, nonatomic) NSString *adamID; // @synthesize adamID=_adamID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

