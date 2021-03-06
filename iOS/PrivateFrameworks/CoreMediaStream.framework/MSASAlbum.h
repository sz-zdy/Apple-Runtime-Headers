//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSCopying-Protocol.h>
#import <CoreMediaStream/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface MSASAlbum : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _ownerIsWhitelisted;
    _Bool _isFamilySharedAlbum;
    int _relationshipState;
    NSString *_ownerEmail;
    NSString *_ownerPersonID;
    NSString *_ownerFullName;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    NSDate *_subscriptionDate;
    NSString *_GUID;
    NSString *_ctag;
    NSString *_foreignCtag;
    NSString *_URLString;
    NSString *_publicURLString;
    NSDictionary *_metadata;
    id _context;
}

+ (id)albumWithAlbum:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)album;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFamilySharedAlbum; // @synthesize isFamilySharedAlbum=_isFamilySharedAlbum;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *publicURLString; // @synthesize publicURLString=_publicURLString;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(retain, nonatomic) NSString *foreignCtag; // @synthesize foreignCtag=_foreignCtag;
@property(nonatomic) int relationshipState; // @synthesize relationshipState=_relationshipState;
@property(retain, nonatomic) NSString *ctag; // @synthesize ctag=_ctag;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic) NSDate *subscriptionDate; // @synthesize subscriptionDate=_subscriptionDate;
@property(nonatomic) _Bool ownerIsWhitelisted; // @synthesize ownerIsWhitelisted=_ownerIsWhitelisted;
@property(retain, nonatomic) NSString *ownerLastName; // @synthesize ownerLastName=_ownerLastName;
@property(retain, nonatomic) NSString *ownerFirstName; // @synthesize ownerFirstName=_ownerFirstName;
@property(retain, nonatomic) NSString *ownerFullName; // @synthesize ownerFullName=_ownerFullName;
@property(retain, nonatomic) NSString *ownerPersonID; // @synthesize ownerPersonID=_ownerPersonID;
@property(retain, nonatomic) NSString *ownerEmail; // @synthesize ownerEmail=_ownerEmail;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)metadataValueForKey:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) _Bool useForeignCtag;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

