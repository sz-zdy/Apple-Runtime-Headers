//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAppleEventDescriptor, NSUndoManager, OSALanguage, OSAScript;

@interface OSAScriptControllerPrivate : NSObject
{
    OSAScript *_script;
    OSALanguage *_language;
    NSAppleEventDescriptor *_defaultTarget;
    long long _scriptState;
    NSUndoManager *_undoManager;
    BOOL _shouldCancelExecution;
    BOOL _isCompiling;
}

- (void)dealloc;
- (id)init;

@end

