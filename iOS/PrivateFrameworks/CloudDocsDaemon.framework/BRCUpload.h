//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCTransfer-Protocol.h>

@class BRCClientZone, BRCItemID, BRCProgress, CKRecord, CKRecordID, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCUpload : NSObject <BRCTransfer>
{
    BRCClientZone *_clientZone;
    long long _throttleID;
    unsigned long long _totalSize;
    NSString *_stageID;
    _Bool _progressPublished;
    BRCItemID *_itemID;
    CKRecord *_record;
    unsigned long long _doneSize;
    BRCProgress *_progress;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *stageID; // @synthesize stageID=_stageID;
@property(readonly, nonatomic) long long throttleID; // @synthesize throttleID=_throttleID;
@property(nonatomic) _Bool progressPublished; // @synthesize progressPublished=_progressPublished;
@property(readonly, nonatomic) BRCProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long doneSize; // @synthesize doneSize=_doneSize;
@property(readonly, nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2 transferSize:(unsigned long long)arg3;
- (id)description;
@property(readonly, nonatomic) NSNumber *transferID;
@property(readonly, nonatomic) NSString *etag;
@property(retain, nonatomic) CKRecord *secondaryRecord;
@property(readonly, nonatomic) CKRecordID *secondaryRecordID;
@property(readonly, nonatomic) CKRecordID *recordID;

@end

