//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSDeviceSettings-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class IKJSRestrictions, NSString;

@protocol _IKJSDeviceSettings <IKJSDeviceSettings, JSExport>
@property(readonly, nonatomic) struct CGSize screen;
@property(readonly, nonatomic) IKJSRestrictions *Restrictions;
@property(readonly, nonatomic) struct CGSize Screen;
@property(readonly, retain, nonatomic) NSString *preferredVideoPreviewFormat;
@property(readonly, retain, nonatomic) NSString *preferredVideoFormat;
@property(readonly, retain, nonatomic) NSString *name;
@end

