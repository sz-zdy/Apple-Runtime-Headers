//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SALCMViewingContext.h>

@class NSDate;

@interface SALCMLiveStreamingViewingContext : SALCMViewingContext
{
}

+ (id)liveStreamingViewingContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)liveStreamingViewingContext;
@property(nonatomic) BOOL watchingLive;
@property(copy, nonatomic) NSDate *eventStartTime;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

