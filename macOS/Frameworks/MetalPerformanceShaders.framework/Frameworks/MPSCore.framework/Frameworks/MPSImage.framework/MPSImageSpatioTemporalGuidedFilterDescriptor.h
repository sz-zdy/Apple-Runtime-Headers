//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPSImageSpatioTemporalGuidedFilterDescriptor : NSObject
{
    BOOL _preallocateIntermediates;
    float _epsilon;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _arrayLength;
    unsigned long long _kernelSpatialDiameter;
    unsigned long long _kernelTemporalDiameter;
    unsigned long long _sourceChannels;
    unsigned long long _guideChannels;
}

+ (id)filterDescriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 arrayLength:(unsigned long long)arg3 kernelSpatialDiameter:(unsigned long long)arg4 kernelTemporalDiameter:(unsigned long long)arg5 epsilon:(float)arg6 sourceChannels:(unsigned long long)arg7 guideChannels:(unsigned long long)arg8 preallocateIntermediates:(BOOL)arg9;
+ (id)filterDescriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 arrayLength:(unsigned long long)arg3 kernelSpatialDiameter:(unsigned long long)arg4 kernelTemporalDiameter:(unsigned long long)arg5 epsilon:(float)arg6 sourceChannels:(unsigned long long)arg7 guideChannels:(unsigned long long)arg8;
@property(nonatomic) BOOL preallocateIntermediates; // @synthesize preallocateIntermediates=_preallocateIntermediates;
@property(nonatomic) unsigned long long guideChannels; // @synthesize guideChannels=_guideChannels;
@property(nonatomic) unsigned long long sourceChannels; // @synthesize sourceChannels=_sourceChannels;
@property(nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) unsigned long long kernelTemporalDiameter; // @synthesize kernelTemporalDiameter=_kernelTemporalDiameter;
@property(nonatomic) unsigned long long kernelSpatialDiameter; // @synthesize kernelSpatialDiameter=_kernelSpatialDiameter;
@property(nonatomic) unsigned long long arrayLength; // @synthesize arrayLength=_arrayLength;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
- (id)init;

@end

