//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _PXSettingsIndexEntry;

@interface PXSettingsSearchResult : NSObject
{
    _PXSettingsIndexEntry *_entry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _PXSettingsIndexEntry *entry; // @synthesize entry=_entry;
- (void)revealInSettingsController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)_initWithEntry:(id)arg1;
- (id)init;

@end

