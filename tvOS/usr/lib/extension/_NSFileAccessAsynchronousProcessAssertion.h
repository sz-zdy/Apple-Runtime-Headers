//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;

__attribute__((visibility("hidden")))
@interface _NSFileAccessAsynchronousProcessAssertion : NSObject
{
    int _pid;
    NSString *_name;
    BKSProcessAssertion *_assertion;
}

@property(readonly) int PID; // @synthesize PID=_pid;
- (void)invalidate;
- (void)beginAssertion;
- (void)dealloc;
- (id)initWithPID:(int)arg1 name:(id)arg2;

@end

