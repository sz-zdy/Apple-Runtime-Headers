//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusFastScrollingIndexBarEntryTrimmerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingEntryTrimmerDelegate : NSObject <_UIFocusFastScrollingIndexBarEntryTrimmerDelegate>
{
}

- (id)_focusFastScrollingIndexBarEntryTrimmer:(id)arg1 placeholderEntryBetweenEntryBefore:(id)arg2 entryAfter:(id)arg3;
- (BOOL)_focusFastScrollingIndexBarEntryTrimmer:(id)arg1 entryIsPlaceholder:(id)arg2;
- (BOOL)_focusFastScrollingIndexBarEntryTrimmer:(id)arg1 startingOrEndingEntryMustBePreserved:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

