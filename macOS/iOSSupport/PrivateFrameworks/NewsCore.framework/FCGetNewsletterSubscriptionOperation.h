//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCNewsletterEndpointConnection;

@interface FCGetNewsletterSubscriptionOperation : FCOperation
{
    FCNewsletterEndpointConnection *_endpointConnection;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) FCNewsletterEndpointConnection *endpointConnection; // @synthesize endpointConnection=_endpointConnection;
- (void)performOperation;
- (id)initWithEndpointConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

