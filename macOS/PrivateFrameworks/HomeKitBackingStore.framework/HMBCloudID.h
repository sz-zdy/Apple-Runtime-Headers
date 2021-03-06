//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMBModelObjectStorage-Protocol.h>
#import <HomeKitBackingStore/NSCopying-Protocol.h>
#import <HomeKitBackingStore/NSSecureCoding-Protocol.h>

@class CKContainerID, NSString, NSUUID;

@interface HMBCloudID : HMFObject <HMBModelObjectStorage, NSSecureCoding, NSCopying>
{
    CKContainerID *_containerID;
    long long _scope;
    NSString *_name;
    NSUUID *_modelID;
}

+ (BOOL)supportsSecureCoding;
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *modelID; // @synthesize modelID=_modelID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithContainerID:(id)arg1 scope:(long long)arg2 name:(id)arg3 modelID:(id)arg4;
- (id)initWithContainerID:(id)arg1 scope:(long long)arg2;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

