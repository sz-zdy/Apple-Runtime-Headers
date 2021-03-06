//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSString;

@interface CPLRampingResponseResource : PBCodable <NSCopying>
{
    long long _retryAfterMillis;
    NSString *_resource;
    _Bool _allowed;
    struct {
        unsigned int retryAfterMillis:1;
        unsigned int allowed:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) long long retryAfterMillis; // @synthesize retryAfterMillis=_retryAfterMillis;
@property(nonatomic) _Bool allowed; // @synthesize allowed=_allowed;
@property(retain, nonatomic) NSString *resource; // @synthesize resource=_resource;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRetryAfterMillis;
@property(nonatomic) _Bool hasAllowed;
@property(readonly, nonatomic) _Bool hasResource;

@end

