//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSLSDuetActivationService : NSObject
{
}

+ (id)sharedService;
- (id)fbsOptionsForActivationOptions:(id)arg1 bundleID:(id)arg2;
- (void)activateApplication:(id)arg1 options:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (_Bool)canActivateApplication:(id)arg1 forReasons:(id)arg2;

@end

