//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface __NSCFTCPIO_BlockCallbacks_Referent : NSObject
{
    struct TCPIO_BlockCallbacks_Listener *_readListener;
    struct TCPIO_BlockCallbacks_Listener *_writeListener;
}

- (_Bool)withListeners:(CDUnknownBlockType)arg1;
- (void)setWriteListener:(struct TCPIO_BlockCallbacks_Listener *)arg1;
- (void)setReadListener:(struct TCPIO_BlockCallbacks_Listener *)arg1;
- (void)dealloc;
- (id)init;

@end

