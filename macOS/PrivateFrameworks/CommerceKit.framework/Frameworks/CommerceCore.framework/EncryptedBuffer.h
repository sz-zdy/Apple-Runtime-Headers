//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EncryptedBuffer : NSObject
{
    unsigned int _magic;
    unsigned char _key[16];
    unsigned long long _size;
    unsigned long long _pageSize;
    unsigned int _pageCount;
    unsigned int _firstPageInBuffer;
    char *_pageEncryptBits;
    char *_pageTempBuffer;
    long long _logicalSize;
    char *_baseAddress;
    CDUnknownFunctionPointerType _ivProc;
    void *_ivProcRefcon;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_file;
    unsigned long long _fileSize;
    BOOL _cacheDirty;
    unsigned int _cachedPageCount;
    unsigned short _options;
}

@property unsigned short options; // @synthesize options=_options;
- (unsigned long long)_writeCurrentCacheBlock;
- (unsigned long long)_decryptRange:(struct _NSRange)arg1;
- (unsigned long long)_cachePage:(unsigned int)arg1;
- (void)decrypt;
- (void)setIVProc:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;
- (void)dealloc;
- (id)initWithFileAtURL:(id)arg1 pageSize:(unsigned long long)arg2 key:(const char *)arg3 options:(unsigned short)arg4;
- (id)initWithSize:(unsigned long long)arg1 pageSize:(unsigned long long)arg2 key:(const char *)arg3 options:(unsigned short)arg4;

@end

