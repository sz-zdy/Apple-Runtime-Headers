//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlayerResponseBuilder-Protocol.h>
#import <MediaPlaybackCore/MPCPlayerSessionResponseBuilder-Protocol.h>
#import <MediaPlaybackCore/MPCResponseMediaRemoteControllerChaining-Protocol.h>
#import <MediaPlaybackCore/MPMiddleware-Protocol.h>
#import <MediaPlaybackCore/_MPCStateDumpPropertyListTransformable-Protocol.h>

@class MPCFuture, MPCMediaRemoteController, MPSectionedCollection, NSArray, NSIndexPath, NSString;
@protocol MPCSupportedCommands;

@interface MPCMediaRemoteMiddleware : NSObject <MPCResponseMediaRemoteControllerChaining, MPCPlayerResponseBuilder, MPCPlayerSessionResponseBuilder, _MPCStateDumpPropertyListTransformable, MPMiddleware>
{
    _Bool _skippedMetadata;
    NSArray *_invalidationObservers;
    MPCFuture *_controllerFuture;
    MPCMediaRemoteController *_controller;
    MPSectionedCollection *_queueContentItems;
    MPSectionedCollection *_queueModelObjects;
    id <MPCSupportedCommands> _supportedCommands;
    NSIndexPath *_playingIndexPath;
    NSString *_queueIdentifier;
    int _playerState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool skippedMetadata; // @synthesize skippedMetadata=_skippedMetadata;
@property(nonatomic) int playerState; // @synthesize playerState=_playerState;
@property(copy, nonatomic) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property(copy, nonatomic) NSIndexPath *playingIndexPath; // @synthesize playingIndexPath=_playingIndexPath;
@property(retain, nonatomic) id <MPCSupportedCommands> supportedCommands; // @synthesize supportedCommands=_supportedCommands;
@property(retain, nonatomic) MPSectionedCollection *queueModelObjects; // @synthesize queueModelObjects=_queueModelObjects;
@property(retain, nonatomic) MPSectionedCollection *queueContentItems; // @synthesize queueContentItems=_queueContentItems;
@property(retain, nonatomic) MPCMediaRemoteController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) MPCFuture *controllerFuture; // @synthesize controllerFuture=_controllerFuture;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (id)_stateDumpObject;
- (id)operationsForSessionRequest:(id)arg1;
- (id)operationsForPlayerRequest:(id)arg1;
- (id)operationsForRequest:(id)arg1;
- (id)init;
- (id)controller:(id)arg1 chain:(id)arg2;
- (float)_playbackRateForContentItem:(id)arg1;
- (id)_supportedCommands:(unsigned int)arg1 infoValueForKey:(id)arg2;
- (id)tracklistUniqueIdentifier:(id)arg1 chain:(id)arg2;
- (id)playerCommandOptionValue:(id)arg1 forKey:(id)arg2 command:(unsigned int)arg3 chain:(id)arg4;
- (_Bool)playerCommandEnabled:(_Bool)arg1 command:(unsigned int)arg2 chain:(id)arg3;
- (_Bool)playerCommandSupported:(_Bool)arg1 command:(unsigned int)arg2 chain:(id)arg3;
- (id)playerItemCurrentLanguageOptions:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (id)playerItemLanguageOptionGroups:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (int)playerGlobalItemCount:(int)arg1 chain:(id)arg2;
- (int)playerPlayingItemGlobalIndex:(int)arg1 chain:(id)arg2;
- (id)playerPlayingItemIndexPath:(id)arg1 chain:(id)arg2;
- (id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;
- (_Bool)playerItemIsPlaceholder:(_Bool)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (int)playerItemEditingStyleFlags:(int)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (id)playerItemExplicitBadge:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (id)playerItemLocalizedDurationString:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (CDStruct_fce57115)playerItemDuration:(CDStruct_fce57115)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (unsigned int)playerNumberOfItems:(unsigned int)arg1 inSection:(unsigned int)arg2 chain:(id)arg3;
- (unsigned int)playerNumberOfSections:(unsigned int)arg1 chain:(id)arg2;
- (int)playerUpNextItemCount:(int)arg1 chain:(id)arg2;
- (int)playerLastChangeDirection:(int)arg1 chain:(id)arg2;
- (int)playerQueueEndAction:(int)arg1 chain:(id)arg2;
- (int)playerShuffleType:(int)arg1 chain:(id)arg2;
- (int)playerRepeatType:(int)arg1 chain:(id)arg2;
- (int)playerState:(int)arg1 chain:(id)arg2;
- (id)sessionMetadataObject:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (id)sessionPlayerPath:(id)arg1 atIndex:(int)arg2 chain:(id)arg3;
- (int)sessionNumberOfSessions:(int)arg1 forPlayerPathAtIndex:(int)arg2 chain:(id)arg3;
- (int)sessionNumberOfPlayerPaths:(int)arg1 chain:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

