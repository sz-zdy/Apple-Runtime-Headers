//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecordFieldIdentifier, CKDPRecordFieldValue, NSMutableArray;

@interface CKDPRecordField : PBCodable <NSCopying>
{
    NSMutableArray *_actions;
    CKDPRecordFieldIdentifier *_identifier;
    CKDPRecordFieldValue *_value;
}

+ (Class)actionType;
+ (id)emptyFieldWithKey:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) CKDPRecordFieldValue *value; // @synthesize value=_value;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)actionAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionsCount;
- (void)addAction:(id)arg1;
- (void)clearActions;
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end

