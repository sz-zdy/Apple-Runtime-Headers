//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface VSKeepAlive : NSObject
{
    NSXPCConnection *_serverConnection;
    int _audioType;
    _Bool _active;
    _Bool _keepAudioSessionActive;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool keepAudioSessionActive; // @synthesize keepAudioSessionActive=_keepAudioSessionActive;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) int audioType; // @synthesize audioType=_audioType;
- (void)_ensureKeepAliveMaintenance;
- (id)_remoteKeepAlive;
- (id)_serverConnection;
- (void)dealloc;

@end

