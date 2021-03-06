//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface ASDPurchaseHistoryQuery : NSObject <NSSecureCoding>
{
    NSArray *_bundleIDs;
    int _isFirstParty;
    int _isHidden;
    int _isPreorder;
    NSString *_searchTerm;
    NSArray *_sortOptions;
    NSArray *_storeIDs;
    long long _accountID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property(copy) NSArray *sortOptions; // @synthesize sortOptions=_sortOptions;
@property(copy) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property int isPreorder; // @synthesize isPreorder=_isPreorder;
@property int isHidden; // @synthesize isHidden=_isHidden;
@property int isFirstParty; // @synthesize isFirstParty=_isFirstParty;
@property(copy) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property long long accountID; // @synthesize accountID=_accountID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

