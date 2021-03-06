//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteConfiguration/RCOperation.h>

@class NSDictionary, NSObject, NSURL, RCConfigurationSettings;
@protocol OS_dispatch_queue;

@interface RCEndpointOperation : RCOperation
{
    RCConfigurationSettings *_configurationSettings;
    NSDictionary *_changeTagsByRequestKey;
    NSURL *_endpointURL;
    CDUnknownBlockType _configurationCompletionHandler;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSDictionary *_configurationResourcesByRequestKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *configurationResourcesByRequestKey; // @synthesize configurationResourcesByRequestKey=_configurationResourcesByRequestKey;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(copy, nonatomic) CDUnknownBlockType configurationCompletionHandler; // @synthesize configurationCompletionHandler=_configurationCompletionHandler;
@property(retain, nonatomic) NSURL *endpointURL; // @synthesize endpointURL=_endpointURL;
@property(retain, nonatomic) NSDictionary *changeTagsByRequestKey; // @synthesize changeTagsByRequestKey=_changeTagsByRequestKey;
@property(retain, nonatomic) RCConfigurationSettings *configurationSettings; // @synthesize configurationSettings=_configurationSettings;
- (void)resetForRetry;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (unsigned long long)maxRetries;
- (id)_configurationErrorForErrorDicts:(id)arg1;
- (void)_parseEndpointResponse:(id)arg1 configurationSettings:(id)arg2 maxAge:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)requestDataForSettings:(id)arg1;
- (void)_fetchConfigurationWithSettings:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

