//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INCodableDescription.h>

@class NSString;

@interface INTypeCodableDescription : INCodableDescription
{
    NSString *_attributeKeyPrefix;
    NSString *_attributesKeyPrefix;
    NSString *_displayName;
    NSString *_displayNameLocID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *displayNameLocID; // @synthesize displayNameLocID=_displayNameLocID;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)_attributesKeyPrefix;
- (id)_attributeKeyPrefix;
- (id)keyPrefix;
- (id)localizedDisplayNameWithLocalizer:(id)arg1;
@property(readonly, copy, nonatomic) NSString *localizedDisplayName;

@end

