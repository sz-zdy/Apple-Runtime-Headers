//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface NetworkPerformanceQuery : NSObject
{
    NSXPCConnection *_connection;
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)currentScorecardFor:(int)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_formatInstantRouteMetrics:(id)arg1;
- (void)dealloc;
- (id)init;

@end

