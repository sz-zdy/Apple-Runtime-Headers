//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ENSignatureFile : NSObject
{
    struct __sFILE *_fileHandle;
    NSArray *_signatures;
}

+ (id)signatureFileWithBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *signatures; // @synthesize signatures=_signatures;
- (_Bool)writeAndReturnError:(id *)arg1;
- (_Bool)closeAndReturnError:(id *)arg1;
- (_Bool)openWithFileSystemRepresentation:(const char *)arg1 reading:(_Bool)arg2 error:(id *)arg3;

@end

