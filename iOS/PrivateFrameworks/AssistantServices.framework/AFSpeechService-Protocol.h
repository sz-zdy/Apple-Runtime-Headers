//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFSpeechCorrectionInfo, NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol AFSpeechService <NSObject>
- (oneway void)sendSpeechCorrectionInfo:(AFSpeechCorrectionInfo *)arg1 interactionIdentifier:(NSString *)arg2;
- (oneway void)writeDESRecord;
- (oneway void)purgeInstalledAssetsWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)getInstalledAssetSizeWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)readProfileAndUserDataWithLanguage:(NSString *)arg1 allowOverride:(_Bool)arg2 completion:(void (^)(NSData *, NSString *))arg3;
- (oneway void)runAdaptationRecipeEvaluation:(NSDictionary *)arg1 recordData:(NSData *)arg2 attachments:(NSArray *)arg3 completion:(void (^)(NSDictionary *, NSData *, NSError *))arg4;
- (oneway void)fetchUserDataForLanguage:(NSString *)arg1 completion:(void (^)(NSData *))arg2;
- (oneway void)fetchAssetsForLanguage:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getOfflineDictationStatusIgnoringCache:(_Bool)arg1 withCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)updateSpeechProfileWithLanguage:(NSString *)arg1 existingProfile:(NSData *)arg2 existingAssetPath:(NSString *)arg3 completion:(void (^)(NSData *, NSString *, NSError *))arg4;
- (oneway void)createSpeechProfileWithLanguage:(NSString *)arg1 JSONData:(NSData *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (oneway void)finishAudio;
- (oneway void)addAudioPacket:(NSData *)arg1;
- (oneway void)startSpeechRecognitionWithLanguage:(NSString *)arg1 interactionIdentifier:(NSString *)arg2 task:(NSString *)arg3 context:(NSArray *)arg4 profile:(NSData *)arg5 narrowband:(_Bool)arg6 detectUtterances:(_Bool)arg7 censorSpeech:(_Bool)arg8 maximumRecognitionDuration:(double)arg9 farField:(_Bool)arg10 overrides:(NSDictionary *)arg11 modelOverrideURL:(NSURL *)arg12 secureOfflineOnly:(_Bool)arg13 originalAudioFileURL:(NSURL *)arg14 didStartHandler:(void (^)(NSString *, NSError *))arg15;
- (oneway void)startRequestActivityWithCompletion:(void (^)(void))arg1;
- (oneway void)preheatSpeechRecognitionWithLanguage:(NSString *)arg1;
@end

