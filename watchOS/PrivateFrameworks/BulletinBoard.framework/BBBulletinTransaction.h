//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BBBulletinTransaction : NSObject
{
    NSString *_bulletinID;
    unsigned int _transactionID;
}

+ (id)transactionWithBulletinID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
- (unsigned int)incrementTransactionID;
- (id)description;
- (id)initWithBulletinID:(id)arg1;

@end

