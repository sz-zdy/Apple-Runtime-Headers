//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ReporterFilter;

__attribute__((visibility("hidden")))
@interface TransportHandler : NSObject
{
    struct _transport_connection_s *_connection;
    unsigned long long _connectionId;
    CDUnknownFunctionPointerType _writeFn;
    unsigned int _ackId;
    _Bool _readOutstanding;
    _Bool _filterUpdateOutstanding;
    _Bool _disabled;
    unsigned int _reporterId;
    const char *_reporterName;
    unsigned long long _pid;
    const char *_processName;
    const char *_bundleId;
    ReporterFilter *_reporterFilter;
    int _reporterVersion;
}

+ (void)updateFilters:(unsigned long long)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)receivePayload:(const void *)arg1 length:(unsigned long long)arg2;
- (void)_sendAck:(unsigned int)arg1;
- (void)_sendFilterUpdate;
- (void)startRead;
- (void)didReceiveEvent:(id)arg1;
- (void)disconnect;
- (void)connect:(struct _transport_connection_s *)arg1 id:(unsigned long long)arg2 writefn:(CDUnknownFunctionPointerType)arg3 pid:(unsigned long long)arg4 name:(char *)arg5;
- (void)generateLibnetcoreSymptomSignpost:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end

