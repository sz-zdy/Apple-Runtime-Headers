//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSDictionary, WLKSiriSearchResponse;

@interface WLKSiriSearchRequestOperation : WLKUTSNetworkRequestOperation
{
    NSDictionary *_query;
    WLKSiriSearchResponse *_response;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WLKSiriSearchResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSDictionary *query; // @synthesize query=_query;
- (void)processResponse;
- (id)initWithQuery:(id)arg1 caller:(id)arg2;

@end

