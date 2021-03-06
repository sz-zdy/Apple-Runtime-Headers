//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class AWDNWDeviceReport, AWDNWL2Report, NSString;

@interface AWDNWActivity : PBCodable <NSCopying>
{
    unsigned long long _activityDomain;
    unsigned long long _activityLabel;
    unsigned long long _timestamp;
    NSString *_activityUUID;
    AWDNWDeviceReport *_deviceReport;
    AWDNWL2Report *_l2Report;
    NSString *_parentActivityUUID;
    _Bool _isRetry;
    struct {
        unsigned int activityDomain:1;
        unsigned int activityLabel:1;
        unsigned int timestamp:1;
        unsigned int isRetry:1;
    } _has;
}

@property(retain, nonatomic) AWDNWDeviceReport *deviceReport; // @synthesize deviceReport=_deviceReport;
@property(retain, nonatomic) AWDNWL2Report *l2Report; // @synthesize l2Report=_l2Report;
@property(nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property(retain, nonatomic) NSString *parentActivityUUID; // @synthesize parentActivityUUID=_parentActivityUUID;
@property(retain, nonatomic) NSString *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(nonatomic) unsigned long long activityLabel; // @synthesize activityLabel=_activityLabel;
@property(nonatomic) unsigned long long activityDomain; // @synthesize activityDomain=_activityDomain;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDeviceReport;
@property(readonly, nonatomic) _Bool hasL2Report;
@property(nonatomic) _Bool hasIsRetry;
@property(readonly, nonatomic) _Bool hasParentActivityUUID;
@property(readonly, nonatomic) _Bool hasActivityUUID;
@property(nonatomic) _Bool hasActivityLabel;
@property(nonatomic) _Bool hasActivityDomain;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

