//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMessageCriterion, NSIndexSet;

__attribute__((visibility("hidden")))
@interface _MFLibrarySearchableIndexResultKey : NSObject
{
    MFMessageCriterion *_criterion;
    NSIndexSet *_mailboxIDs;
}

@property(copy, nonatomic) NSIndexSet *mailboxIDs; // @synthesize mailboxIDs=_mailboxIDs;
@property(retain, nonatomic) MFMessageCriterion *criterion; // @synthesize criterion=_criterion;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;

@end

