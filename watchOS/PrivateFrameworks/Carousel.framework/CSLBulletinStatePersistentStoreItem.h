//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSLBulletinKey, CSLBulletinState, NSDate, NSString;

@interface CSLBulletinStatePersistentStoreItem : NSObject
{
    CSLBulletinKey *_bulletinKey;
    NSString *_universalSectionID;
    NSString *_publisherMatchID;
    NSDate *_date;
    _Bool _isClearable;
    CSLBulletinState *_state;
    NSDate *_expirationDate;
}

+ (id)itemWithBulletin:(id)arg1 key:(id)arg2;
- (void).cxx_destruct;
- (void)setExpirationDate:(id)arg1;
@property(readonly, nonatomic) NSDate *expirationDate;
- (void)setState:(id)arg1;
@property(readonly, nonatomic) CSLBulletinState *state;
- (void)setIsClearable:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isClearable;
- (void)setDate:(id)arg1;
@property(readonly, nonatomic) NSDate *date;
- (void)setPublisherMatchID:(id)arg1;
@property(readonly, nonatomic) NSString *publisherMatchID;
- (void)setUniversalSectionID:(id)arg1;
@property(readonly, nonatomic) NSString *universalSectionID;
- (void)setBulletinKey:(id)arg1;
@property(readonly, nonatomic) CSLBulletinKey *bulletinKey;
- (id)init;

@end

