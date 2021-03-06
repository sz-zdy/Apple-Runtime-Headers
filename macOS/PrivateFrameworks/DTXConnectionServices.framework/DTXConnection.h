//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DTXConnectionServices/DTXConnectionRemoteReceiveQueueCalls-Protocol.h>
#import <DTXConnectionServices/DTXMessenger-Protocol.h>

@class DTXChannel, DTXMessageParser, DTXMessageTransmitter, DTXResourceTracker, DTXTransport, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol DTXBlockCompressor, DTXRateLimiter, OS_dispatch_queue, OS_dispatch_semaphore;

@interface DTXConnection : NSObject <DTXConnectionRemoteReceiveQueueCalls, DTXMessenger>
{
    NSString *_label;
    NSObject<OS_dispatch_queue> *_outgoing_message_queue;
    NSObject<OS_dispatch_queue> *_outgoing_control_queue;
    DTXTransport *_controlTransport;
    NSSet *_permittedBlockCompressors;
    NSObject<OS_dispatch_queue> *_receive_queue;
    NSObject<OS_dispatch_queue> *_handler_queue;
    unsigned int _nextChannelCode;
    NSMutableDictionary *_channelsByCode;
    NSMutableDictionary *_unconfiguredChannelsByCode;
    NSMutableDictionary *_handlersByIdentifier;
    NSMutableDictionary *_protocolHandlers;
    NSMutableDictionary *_localCapabilityVersions;
    NSMutableDictionary *_localCapabilityClasses;
    NSDictionary *_remoteCapabilityVersions;
    NSMutableArray *_capabilityOverrideBlocks;
    DTXResourceTracker *_resourceTracker;
    DTXResourceTracker *_incomingResourceTracker;
    NSObject<OS_dispatch_semaphore> *_firstMessageSem;
    DTXMessageParser *_incomingParser;
    DTXMessageTransmitter *_outgoingTransmitter;
    DTXChannel *_defaultChannel;
    BOOL _tracer;
    BOOL _remoteTracer;
    int _connectionIndex;
    CDUnknownBlockType _channelHandler;
    id <DTXRateLimiter> _defaultRateLimiter;
    unsigned long long _logMessageCallstackSizeThreshold;
    int _remoteCompressionCapabilityVersion;
    int _newChannelCompressionHint;
    int _compressionTypeForUnspecified;
    unsigned long long _compressionMinSizeThreshold;
    id <DTXBlockCompressor> _compressor;
}

+ (id)connectionToAddress:(id)arg1;
+ (void)registerTransport:(Class)arg1 forScheme:(id)arg2;
+ (void)initialize;
+ (void)observeDecompressionExceptionLogging:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) int atomicConnectionNumber; // @synthesize atomicConnectionNumber=_connectionIndex;
@property(nonatomic) BOOL remoteTracer; // @synthesize remoteTracer=_remoteTracer;
@property(nonatomic) BOOL tracer; // @synthesize tracer=_tracer;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)_notifyCompressionHint:(unsigned int)arg1 forChannelCode:(unsigned int)arg2;
- (void)_receiveQueueSetCompressionHint:(unsigned int)arg1 onChannel:(id)arg2;
- (void)_setTracerState:(unsigned int)arg1;
- (void)_channelCanceled:(unsigned int)arg1;
- (void)_notifyOfPublishedCapabilities:(id)arg1;
- (void)_requestChannelWithCode:(unsigned int)arg1 identifier:(id)arg2;
- (void)_unregisterChannel:(id)arg1;
- (id)makeChannelWithIdentifier:(id)arg1;
- (void)_scheduleMessage:(id)arg1 toChannel:(id)arg2;
- (void)_routeMessage:(id)arg1;
- (BOOL)_addHandler:(CDUnknownBlockType)arg1 forMessage:(unsigned int)arg2 channel:(id)arg3;
- (BOOL)sendMessage:(id)arg1 fromChannel:(id)arg2 sendMode:(int)arg3 syncWithReply:(BOOL)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (void)sendMessageSync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)sendMessageAsync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendControlSync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendControlAsync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_cancelInternal:(CDUnknownBlockType)arg1;
- (void)cancelWithSerializedTransport:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)registerDisconnectHandler:(CDUnknownBlockType)arg1;
- (void)setChannelHandler:(CDUnknownBlockType)arg1;
- (void)setDispatchTarget:(id)arg1;
- (void)setMessageHandler:(CDUnknownBlockType)arg1;
- (void)throttleBandwidthBytesPerSecond:(unsigned long long)arg1;
- (void)resume;
- (void)suspend;
- (id)remoteCapabilityVersions;
- (void)registerCapabilityOverrideBlock:(CDUnknownBlockType)arg1;
- (int)remoteCapabilityVersion:(id)arg1;
- (void)_handleMissingRemoteCapabilities;
- (double)preflightSynchronouslyWithTimeout:(double)arg1;
- (id)_sendHeartbeatAsyncWithTimeout:(double)arg1;
- (id)localCapabilities;
- (void)publishCapability:(id)arg1 withVersion:(int)arg2 forClass:(Class)arg3;
@property(nonatomic) unsigned long long maximumEnqueueSize;
@property(readonly, copy) NSString *description;
- (id)publishedAddresses;
- (void)dealloc;
- (id)initWithTransport:(id)arg1;
- (void)_setupWireProtocols;
- (void)_handleMessageParseException:(id)arg1 forChannelCode:(unsigned int)arg2 messageID:(unsigned int)arg3 fragmentCount:(unsigned int)arg4 withPayloadBytes:(const void *)arg5 ofLength:(unsigned long long)arg6;
- (void)setCompressionHint:(int)arg1 forChannel:(id)arg2;
- (void)publishServicesInImagePath:(id)arg1;
- (id)makeProxyChannelWithRemoteInterface:(id)arg1 exportedInterface:(id)arg2;
- (void)handleProxyRequestForInterface:(id)arg1 peerInterface:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(readonly, retain, nonatomic) DTXChannel *defaultChannel;
- (void)replaceCompressorForDecompression:(id)arg1;
- (void)replaceCompressorForCompression:(id)arg1;
- (void)overridePermittedBlockCompressors:(id)arg1;
- (id)_testing_remoteCapabilityVersions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

