//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NEIKEv2IKESPI;
@protocol NEIKEv2TransportDelegate;

@interface NEIKEv2TransportClient : NSObject
{
    _Bool _wildcard;
    NEIKEv2IKESPI *_clientSPI;
    id <NEIKEv2TransportDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <NEIKEv2TransportDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool wildcard; // @synthesize wildcard=_wildcard;
@property(retain) NEIKEv2IKESPI *clientSPI; // @synthesize clientSPI=_clientSPI;
- (id)description;

@end

