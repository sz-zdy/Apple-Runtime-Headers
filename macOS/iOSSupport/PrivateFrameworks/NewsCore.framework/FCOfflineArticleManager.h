//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCKeyedOperationQueueDelegate-Protocol.h>
#import <NewsCore/FCNetworkReachabilityObserving-Protocol.h>
#import <NewsCore/FCOfflineArticleManagerType-Protocol.h>
#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@class FCKeyedOperationQueue, FCThreadSafeMutableSet, NSDictionary, NSHashTable, NSMutableSet, NSOrderedSet, NSSet, NSString;
@protocol FCArticleDownloadServiceType, FCOperationThrottler, OS_dispatch_group;

@interface FCOfflineArticleManager : NSObject <FCKeyedOperationQueueDelegate, FCOperationThrottlerDelegate, FCNetworkReachabilityObserving, FCOfflineArticleManagerType>
{
    BOOL _hasBeenEnabled;
    id <FCArticleDownloadServiceType> _downloadService;
    NSHashTable *_contributors;
    NSOrderedSet *_articleIDsOfInterest;
    NSOrderedSet *_downloadableArticleIDs;
    NSDictionary *_holdInterestTokensByArticleID;
    FCKeyedOperationQueue *_articleContentDownloadKeyQueue;
    id <FCOperationThrottler> _updateHoldInterestTokensThrottler;
    NSObject<OS_dispatch_group> *_articleContentDownloadGroup;
    NSObject<OS_dispatch_group> *_contributorsReadyGroup;
    NSMutableSet *_fetchResults;
    FCThreadSafeMutableSet *_articleIDsAvailableForOfflineReading;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FCThreadSafeMutableSet *articleIDsAvailableForOfflineReading; // @synthesize articleIDsAvailableForOfflineReading=_articleIDsAvailableForOfflineReading;
@property(nonatomic) BOOL hasBeenEnabled; // @synthesize hasBeenEnabled=_hasBeenEnabled;
@property(retain, nonatomic) NSMutableSet *fetchResults; // @synthesize fetchResults=_fetchResults;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *contributorsReadyGroup; // @synthesize contributorsReadyGroup=_contributorsReadyGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *articleContentDownloadGroup; // @synthesize articleContentDownloadGroup=_articleContentDownloadGroup;
@property(retain, nonatomic) id <FCOperationThrottler> updateHoldInterestTokensThrottler; // @synthesize updateHoldInterestTokensThrottler=_updateHoldInterestTokensThrottler;
@property(retain, nonatomic) FCKeyedOperationQueue *articleContentDownloadKeyQueue; // @synthesize articleContentDownloadKeyQueue=_articleContentDownloadKeyQueue;
@property(copy, nonatomic) NSDictionary *holdInterestTokensByArticleID; // @synthesize holdInterestTokensByArticleID=_holdInterestTokensByArticleID;
@property(copy, nonatomic) NSOrderedSet *downloadableArticleIDs; // @synthesize downloadableArticleIDs=_downloadableArticleIDs;
@property(copy, nonatomic) NSOrderedSet *articleIDsOfInterest; // @synthesize articleIDsOfInterest=_articleIDsOfInterest;
@property(readonly, nonatomic) NSHashTable *contributors; // @synthesize contributors=_contributors;
@property(retain, nonatomic) id <FCArticleDownloadServiceType> downloadService; // @synthesize downloadService=_downloadService;
- (void)_fetchHoldInterestTokensForArticleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateInterestsIfNeeded;
- (id)_latestDownloadableArticleIDs;
- (id)_latestArticleIDsOfInterest;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)powerStateDidChange;
- (void)networkReachabilityDidChange:(id)arg1;
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addContributor:(id)arg1;
- (void)notifyWhenFinishedDownloadingWithBlock:(CDUnknownBlockType)arg1;
- (void)expressInterestInArticlesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableDownloading;
@property(readonly, nonatomic) NSSet *downloadedArticleIDs;
- (void)dealloc;
- (id)initWithDownloadService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

