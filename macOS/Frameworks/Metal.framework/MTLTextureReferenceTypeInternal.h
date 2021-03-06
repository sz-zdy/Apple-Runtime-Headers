//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLTextureReferenceType.h>

__attribute__((visibility("hidden")))
@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType
{
    unsigned long long _dataType;
    unsigned long long _textureDataType;
    unsigned long long _textureType;
    unsigned long long _access;
    BOOL _isDepthTexture;
}

- (BOOL)isDepthTexture;
- (unsigned long long)access;
- (unsigned long long)textureType;
- (unsigned long long)textureDataType;
- (unsigned long long)dataType;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDataType:(unsigned long long)arg1 textureType:(unsigned long long)arg2 access:(unsigned long long)arg3 isDepthTexture:(BOOL)arg4;

@end

