//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface CalDAVCalendarUserAddress : NSObject
{
    NSURL *_address;
    int _preferred;
}

+ (id)_preferredAddressNoPreferred:(id)arg1;
+ (id)_minPreferredAddress:(id)arg1;
+ (id)preferredAddress:(id)arg1;
+ (id)unpackCalDAVUserAdress:(id)arg1;
+ (id)packCalDAVUserAdress:(id)arg1;
+ (int)defaultPreferredAttribute;
- (void).cxx_destruct;
@property int preferred; // @synthesize preferred=_preferred;
@property(retain, nonatomic) NSURL *address; // @synthesize address=_address;
- (int)compare:(id)arg1;
- (id)initWithAddress:(id)arg1 preferred:(int)arg2;

@end

